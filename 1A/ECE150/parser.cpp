#include <fstream>
#include <iostream>
using namespace std;

bool strCmp(char str1[], char str2[]){
	int i;
	char* a = str1;
	char* b = str2;
	for (i = 0; a[i] == b[i]; ++i){
		if (a[i] == '\0')
			return true;
	}
	return false;
}


void ErrorOp(int lineNumber){
	cerr << "Error on line " <<  lineNumber << ": Invalid OPCODE \n";
}

void ErrorOperand(int lineNumber){
	cerr << "Error on line " << lineNumber << ": Invalid OPERAND \n";
}

void ErrorEnd(int lineNumber){
	cerr << "Error on line " << lineNumber << ": extra input after the Operand \n";
}

bool Ri(char* line, int &charNum, int lineNumber){
	
	if (line[charNum] == 'R'){
		while(line[charNum] != ' ' && line[charNum] != '\t' && line[charNum] != ','){
			int check = 0;
			if (line[charNum] < '0' && line[charNum] > '9' && check > 0){
				ErrorOperand(lineNumber);
				return 0;
			}
		}
	} else {
		return false;
	}
}
bool number(char* line, int charNum, int lineNumber){
	if(line[charNum] >= '0' && line[charNum] <= '9'){
		while(line[charNum] >= '0' && line[charNum] <= '9'){
			charNum++;
		}
	}
	else{
		return false;
	}
	return true;
}
bool checkEnd(char* line, int charNum, int lineNumber){
	do{
		if (line[charNum] == '#'){
			return true;
		} else if (line[charNum] != ' ' && line[charNum] != '\t' && line[charNum] != 0){
			ErrorEnd(lineNumber);
			return false;
		}
		charNum++;
	}while(line[charNum] != 0);
	return true;
}

void whitespace(char* line, int &charNum){
	while(line[charNum] == ' ' || line[charNum] == '\t'){
		charNum++;
	}
}

int load(char* line, int charNum, int lineNumber){
	whitespace(line, charNum);
	if (Ri(line, charNum, lineNumber) || number(line, charNum, lineNumber)){
		whitespace(line, charNum);
		if (line[charNum] != ','){
			ErrorOperand(lineNumber);
			return 0;
		}
		whitespace(line, charNum);
		if (Ri(line, charNum, lineNumber)){
			if (checkEnd(line, charNum, lineNumber)){
				return 1;
			}else 
				return 0;
		}else {
			ErrorOperand(lineNumber);
			return 0;
		}
			
	} else {
		ErrorOperand(lineNumber);
		return 0;
	}
}

int loadI(char* line, int charNum, int lineNumber){
		whitespace(line, charNum);
	if (number(line, charNum, lineNumber)){
		whitespace(line, charNum);
		if (line[charNum] != ','){
			ErrorOperand(lineNumber);
			return 0;
		}
		whitespace(line, charNum);
		if (Ri(line, charNum, lineNumber)){
			if (checkEnd(line, charNum, lineNumber)){
				return 1;
			}else 
				return 0;
		}else {
			ErrorOperand(lineNumber);
			return 0;
		}
			
	} else {
		ErrorOperand(lineNumber);
		return 0;
	}
}

int store(char* line, int charNum, int lineNumber){
			whitespace(line, charNum);
	if (Ri(line, charNum, lineNumber)){
		whitespace(line, charNum);
		if (line[charNum] != ','){
			ErrorOperand(lineNumber);
			return 0;
		}
		whitespace(line, charNum);
		if (Ri(line, charNum, lineNumber) || number(line, charNum, lineNumber)){
			if (checkEnd(line, charNum, lineNumber)){
				return 1;
			}else 
				return 0;
		}else {
			ErrorOperand(lineNumber);
			return 0;
		}
			
	} else {
		ErrorOperand(lineNumber);
		return 0;
	}
}

int storeI(char* line, int charNum, int lineNumber){
			whitespace(line, charNum);
	if (number(line, charNum, lineNumber)){
		whitespace(line, charNum);
		if (line[charNum] != ','){
			ErrorOperand(lineNumber);
			return 0;
		}
		whitespace(line, charNum);
		if (Ri(line, charNum, lineNumber) || number(line, charNum, lineNumber)){
			if (checkEnd(line, charNum, lineNumber)){
				return 1;
			}else 
				return 0;
		}else {
			ErrorOperand(lineNumber);
			return 0;
		}
			
	} else {
		ErrorOperand(lineNumber);
		return 0;
	}
}

int oppRi(char* line, int charNum, int lineNumber){
	whitespace(line, charNum);
	if (Ri(line, charNum, lineNumber)){
		whitespace(line, charNum);
		if (line[charNum] != ','){
			ErrorOperand(lineNumber);
			return 0;
		}
		whitespace(line, charNum);
		if (Ri(line, charNum, lineNumber)){
			whitespace(line, charNum);
			if (line[charNum] != ','){
				ErrorOperand(lineNumber);
				return 0;
			}
			whitespace(line, charNum);
			if (Ri(line, charNum, lineNumber)){
				if (checkEnd(line, charNum, lineNumber)){
					return 1;
				} else
					return 0;
			} else {
				ErrorOperand(lineNumber);
				return 0;
			}
		}else {
			ErrorOperand(lineNumber);
			return 0; 
		}
	}else {
		ErrorOperand(lineNumber);
		return 0;
	}
}

int oppI (char* line, int charNum, int lineNumber){
	whitespace(line, charNum);
	if (Ri(line, charNum, lineNumber)){
		whitespace(line, charNum);
		if (line[charNum] != ','){
			ErrorOperand(lineNumber);
			return 0;
		}
		whitespace(line, charNum);
		if (number(line, charNum, lineNumber)){
			whitespace(line, charNum);
			if (line[charNum] != ','){
				ErrorOperand(lineNumber);
				return 0;
			}
			whitespace(line, charNum);
			if (Ri(line, charNum, lineNumber)){
				if (checkEnd(line, charNum, lineNumber)){
					return 1;
				} else
					return 0;
			} else {
				ErrorOperand(lineNumber);
				return 0;
			}
		}else {
			ErrorOperand(lineNumber);
			return 0; 
		}
	}else {
		ErrorOperand(lineNumber);
		return 0;
	}	
}

int Jmp (char* line, int charNum, int lineNumber){
	whitespace(line, charNum);
	if (number(line, charNum, lineNumber)){
		if (checkEnd(line, charNum, lineNumber)){
			return 1;
		}else {
			return 0;
		}
	} else {
		ErrorOperand(lineNumber);
		return 0;
	}
}

int othrJmp (char* line, int charNum, int lineNumber){
				whitespace(line, charNum);
	if (Ri(line, charNum, lineNumber)){
		whitespace(line, charNum);
		if (line[charNum] != ','){
			ErrorOperand(lineNumber);
			return 0;
		}
		whitespace(line, charNum);
		if (number(line, charNum, lineNumber)){
			if (checkEnd(line, charNum, lineNumber)){
				return 1;
			}else 
				return 0;
		}else {
			ErrorOperand(lineNumber);
			return 0;
		}
			
	} else {
		ErrorOperand(lineNumber);
		return 0;
	}
}

int getInt (char* line, int charNum, int lineNumber){
	whitespace(line, charNum);
	int i = 0, num = 0;
	while(line[charNum] >= '0' && line[charNum] <= '9'){
		num *= 10;
		num += line[charNum] - '0';
		charNum++;
	}
	if (checkEnd(line, charNum, lineNumber)){
		return num;
	}else {
		return -1;
	}
}



int main(int argc, char* argv[]){
		if (argc != 2){
			cerr << "Error: Invalid Input Commands \n";
			return -1;
		}
		ifstream infile;
		infile.open(argv[1]);
		
		if (!infile.is_open()){
			cerr << "Error: File did not open \n";
			return -1;
		}

		int lineNumber = 1;
		int alu = 0, loadStore = 0, compJmp = 0;
		char line[100];
		while ( infile.getline (line, 100)){
			bool continueLine = true;
			int charNum = 0;
			int codeNum = 0;
			char code[50];
	whitespace(line, charNum);
	while (line[charNum] != ' ' && line[charNum] != '\t' && line[charNum] != '\n' && continueLine){
		if (line[charNum] == '#')
			continueLine = false;
		code[codeNum] = line[charNum];
		codeNum++;
		charNum++;
	}
	// char label[][21] = {"LD", "LDi", "SD", "SDi", "ADD", "ADDi", "SUB", "SUBi", "MUL", "MULi", "DIV", "DIVi", "JMP", "JZ", "JNZ", "JGZ", "JGEZ", "JLZ", "JLEZ", "Code:", "Data:"};
	// int i = 0;
	// for (i = 0; i < 21; ++i){
		// if (strCmp (code, label[i]))
			// break;
	// }
	// int dataCodeNum;
	// switch (i){
		// case 0:
			// loadStore += load(line, charNum, lineNumber);
			// lineNumber++;
			// break;
		// case 1: 
			// loadStore += loadI(line, charNum, lineNumber);
			// lineNumber++;
			// break;
		// case 2: 
			// loadStore += store(line, charNum, lineNumber);
			// lineNumber++;
			// break;
		// case 3: 
			// loadStore += storeI(line, charNum, lineNumber);
			// lineNumber++;
			// break;
		// case 4:
		// case 6: 
		// case 8: 
		// case 10: 
			// alu += oppRi(line, charNum, lineNumber);
			// lineNumber++;
			// break;
		// case 5:
		// case 7: 
		// case 9: 
		// case 11: 
			// alu += oppI(line, charNum, lineNumber);
			// break;
		// case 12: 
			// compJmp += Jmp(line, charNum, lineNumber);
			// lineNumber++;
			// break;
		// case 13:
		// case 14:
		// case 15:
		// case 16: 
		// case 17: 
		// case 18: 
			// compJmp += othrJmp(line, charNum, lineNumber);
			// lineNumber++;
			// break;
		// case 19:
			// dataCodeNum = getInt(line, charNum, lineNumber);
			// if (dataCodeNum == -1)
				// break;
			// cout << "Code: " << dataCodeNum << endl;
			// lineNumber = dataCodeNum;
			// break;
		// case 20: 
			// dataCodeNum = getInt(line, charNum, lineNumber);
			// if (dataCodeNum == -1){
			// } else {
				// cout << "Data: " << dataCodeNum << endl;
			// }
			// break;
			
		// default:
			// if (code[codeNum] == ':'){
				// if (checkEnd(line, charNum, lineNumber))
					// cout << code << " " << lineNumber << endl;
			// } else if (!continueLine){
			// }else{
				// ErrorOp(lineNumber);
			// }
			// break;
			
	// }
	
	
	
	
	
	
}

cout << "Total number of assembly instructions: " << loadStore + alu + compJmp << endl;
cout << "Number of Load/Store: " << loadStore << endl;
cout << "Number of ALU: " << alu;
cout << "Number of Compare/Jump: " << compJmp << endl;

}
			
