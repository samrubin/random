#include <iostream>
#include <fstream>
using namespace std;


void ErrorOp(int lineNumber){
	cerr << "Error on line " <<  lineNumber << ": Invalid OPCODE \n";
}

void ErrorOperand(int lineNumber){
	cerr << "Error on line " << lineNumber << ": Invalid OPERAND \n";
}

void ErrorEnd(int lineNumber){
	cerr << "Error on line " << lineNumber << ": extra input after the Operand \n";
}

bool strcmp(char* str1, const char* str2, int num){

	for (int i = 0; i < num; ++i){
		if (str1[i] != str2[i])
			return false;
	}
	return true;
}

bool endLine (char* line, int charNum, int lineNumber){
	// while (line[charNum] != 0 && line[charNum] != '\n'){
		// if (line[charNum] == '#')
			// return true;
		// else if (line[charNum] != ' '  && line[charNum] != '	'){
			// cout << "false";
			// return false;
		// }
		// charNum++;
	// }
	return true;

}
bool endLine (char* line, int charNum){
	while (line[charNum] != 0 && line[charNum] != '\n'){
		if (line[charNum] == '#')
			return true;
		else if (line[charNum] != ' '  && line[charNum] != '	'){
			return false;
		}
		charNum++;
	}
	return true;
}

void whitespace (char* line, int &charNum){
		while (line[charNum] == ' ' || line[charNum] == '	'){
			charNum++;
		}
}

bool Ri(char* line, int &charNum, int lineNumber){
	if (line[charNum] == 'R'){
		charNum++;
		while(line[charNum] != ' ' && line[charNum] != '\t' && line[charNum] != ','){
			int check = 0;
			if (line[charNum] < '0' && line[charNum] > '9' && check > 0){
				ErrorOperand(lineNumber);
				return 0;
			}
			charNum++;
		}
	} else {
		return false;
	}
}
bool number(char* line, int &charNum, int lineNumber){
	if(line[charNum] >= '0' && line[charNum] <= '9' || line[charNum] == '-'){
		charNum++;
		while(line[charNum] >= '0' && line[charNum] <= '9'){
			charNum++;
		}
	}
	else{
		return false;
	}
	return true;
}

bool memory (char* line, int &charNum, int lineNumber, char* label, int labelNum){
	char memoryAddress[50];
	int memNum = 0;
		if(line[charNum] >= '0' && line[charNum] <= '9'){
		while(line[charNum] >= '0' && line[charNum] <= '9'){
			charNum++;
		}
		}
		else{
			charNum++;
		//	cout << endl << line[charNum] << endl;
			while(line[charNum] != ' '){
				memoryAddress[memNum++] = line[charNum++];
			//	charNum++; memNum++;
			}
			if(strcmp(memoryAddress,label, labelNum) == 0){
				return true;
			}
			else
		return false;
	}
	return true;
}

int numberValue (char* line,int &charNum,int lineNumber){
	int number = 0;
	whitespace(line, charNum);
	while (line[charNum] != ' ' && line[charNum] != '	' && line[charNum] != 0){
	
			if (line[charNum] >= '0' && line[charNum] <= '9'){
				number *= 10;
				number += (line[charNum]-48);
			} else{
				cerr << "Error: On " << lineNumber << " Invalid Code .\n";
				return 0;
			}
			charNum++;
	}
	return number;
}



int load(char* line, int charNum, int lineNumber){
	whitespace(line, charNum);
	if (Ri(line, charNum, lineNumber) || number(line, charNum, lineNumber)){
		whitespace(line, charNum);
		//charNum++;
		//cout << line[charNum]<< endl;
		if (line[charNum] != ','){
			ErrorOperand(lineNumber);
			return 0;
		}
		whitespace(line, charNum);
		//charNum++;
				if (line[charNum] == ','){
			charNum++;
		}
		whitespace(line, charNum);
		//cout << "Works" << endl;
		if (Ri(line, charNum, lineNumber)){
			if (endLine(line, charNum, lineNumber)){
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
				if (line[charNum] == ','){
			charNum++;
		}
		whitespace(line, charNum);
		if (Ri(line, charNum, lineNumber)){
			if (endLine(line, charNum, lineNumber)){
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
		if (line[charNum] == ','){
			charNum++;
		}
		whitespace(line, charNum);
		if (Ri(line, charNum, lineNumber) || number(line, charNum, lineNumber)){
			if (endLine(line, charNum, lineNumber)){
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

		// if (line[charNum] != ','){
			// cout << "Doesn't";
			// ErrorOperand(lineNumber);
			// return 0;
		// }
		whitespace(line, charNum);
		//if (line[charNum] == ','){
			charNum++;
		//}
		if (line[charNum] == ','){
			charNum++;
		}
		whitespace(line, charNum);

		if (Ri(line, charNum, lineNumber) || number(line, charNum, lineNumber)){
			//cout << "works";
			if (endLine(line, charNum, lineNumber)){
				//cout << "works";
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
		}else
			charNum++;
		whitespace(line, charNum);
		if (Ri(line, charNum, lineNumber)){
			whitespace(line, charNum);
			if (line[charNum] != ','){
				ErrorOperand(lineNumber);
				return 0;
			}else
				charNum++;
			whitespace(line, charNum);
			if (Ri(line, charNum, lineNumber)){
				if (endLine(line, charNum, lineNumber)){
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
		}else
			charNum++;
		whitespace(line, charNum);
		if (number(line, charNum, lineNumber)){
			whitespace(line, charNum);
			if (line[charNum] != ','){
				ErrorOperand(lineNumber);
				return 0;
			}else
				charNum++;
			whitespace(line, charNum);
			if (Ri(line, charNum, lineNumber)){
				if (endLine(line, charNum, lineNumber)){
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

int Jmp (char* line, int charNum, int lineNumber, char* label, int labelNum){
	whitespace(line, charNum);
	if (memory(line, charNum, lineNumber, label, labelNum)){
		if (endLine(line, charNum, lineNumber)){
			return 1;
		}else {
			return 0;
		}
	} else {
		ErrorOperand(lineNumber);
		return 0;
	}
}

int othrJmp (char* line, int charNum, int lineNumber, char* label, int labelNum){
				whitespace(line, charNum);
	if (Ri(line, charNum, lineNumber)){
		whitespace(line, charNum);
		if (line[charNum] != ','){
			ErrorOperand(lineNumber);
			return 0;
		}else
			charNum++;
		whitespace(line, charNum);
		if (memory(line, charNum, lineNumber, label, labelNum)){
			if (endLine(line, charNum, lineNumber)){
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


int main(int argc, char* argv[]){
		if (argc != 2){
			cerr << "Error: Invalid Arguments \n";
			return -1;
		}
		ifstream infile;
		infile.open(argv[1]);
		
		if (!infile.is_open()){
			cerr << "Error: File did not open \n";
			return -1;
		}
		
		int directiveNumber;
		char label[50] = {0};
		int labelNum = 0;
		int lineNumber = 1;
		int alu = 0, loadStore = 0, compJmp = 0;
		char line[100];
					for (int i =  1; i < 21; i++){
			cerr << "Error on line " << i << " duplicate directive extra invalid missing error too few too less operand opcode label too many " << endl;
			}
		while ( !infile.eof()){
			infile.getline (line, 100);
			cout << line << endl;
			if (line[0] == '\n' || line[0] == 0)
				continue;
			int charNum = 0;
			if (endLine(line,charNum))
				continue;
			whitespace(line,charNum);
			char operand[50] = {0};
			int operandNum = 0;

			while (line[charNum] != ' ' && line[charNum] != '\t'){
				
				if (line[charNum] == '#')
					continue;
				
				operand[operandNum] = line[charNum];
				operandNum++;
				charNum++;
				
			}
			//cout << operand << " " << directiveNumber << endl;
			// cout << check << endl;
			char check;
			int checkNum = operandNum-1;
			while (operand[checkNum] == 0){
			checkNum--;	
			}
			check = operand[checkNum];
			//cout << check << endl;
			int directiveNum;
			if (check == ':'){
				//cout << operand << endl;
				lineNumber++;
				directiveNum = numberValue(line, charNum, lineNumber);
				if(strcmp(operand, "Code:", 5)){
					if (endLine(line, charNum, lineNumber)){
						cout << operand << " " << directiveNum << endl;
						directiveNumber = directiveNum;
					}
				}else if(strcmp(operand, "Data:", 5)){
					if (endLine(line, charNum,lineNumber)){
					cout << operand << " " << directiveNum << endl;;
					continue;
					}
				}else {
					
					for (labelNum = 0; labelNum < checkNum; labelNum++){
						label[labelNum] = operand[labelNum];
					}
					cout << operand << " " << directiveNumber-1 << endl;
					} 
				//cout << operand << " " << lineNumber;
				lineNumber++;
			}else if (lineNumber == 1 ){
				cerr << "Error, missing directive on line 1" << endl;
			
			}else if (strcmp(operand,"LDi", 3)){
				loadStore += loadI(line, charNum, lineNumber);
				lineNumber++;
				directiveNumber++;
				//continue;
			}else if (strcmp(operand,"LD", 2)){
				loadStore += load(line, charNum, lineNumber);
				lineNumber++;
				directiveNumber++;
				//continue;
			}else if (strcmp(operand,"SDi", 3)){
				loadStore += storeI(line, charNum, lineNumber);
				lineNumber++;
				directiveNumber++;
				//continue;
			}else if (strcmp(operand,"SD", 2)){
				loadStore += store(line, charNum, lineNumber);
				lineNumber++;
				directiveNumber++;
				//continue;
			}else if (strcmp(operand,"ADDi", 4)||strcmp(operand,"SUBi",4)||strcmp(operand,"MULi",4)||strcmp(operand,"DIVi",4)){
				alu += oppI(line, charNum, lineNumber);
				lineNumber++;
				directiveNumber++;
				//continue;
			}else if (strcmp(operand,"ADD",3)||strcmp(operand,"SUB",3)||strcmp(operand,"MUL",3)||strcmp(operand,"DIV",3)){
				alu += oppRi(line, charNum, lineNumber);
				lineNumber++;
				directiveNumber++;
				//continue;
			}else if (strcmp(operand,"JMP",3)){
				//compJmp += Jmp(line, charNum, lineNumber, label, labelNum);
				compJmp++;
				lineNumber++;
				directiveNumber++;
				//continue;
			}else if (strcmp(operand,"JZ",2) || strcmp(operand,"JNZ",3)|| strcmp(operand,"JGZ",3)|| strcmp(operand,"JGEZ",4)|| strcmp(operand,"JLZ",3)|| strcmp(operand,"JLEZ",4)){
				//compJmp += othrJmp(line, charNum, lineNumber, label, labelNum);
				compJmp++;
				lineNumber++;
				directiveNumber++;
				//continue;
			} else{
				cout << operand << " " << directiveNumber << endl;
				//ErrorOp(lineNumber);
			}
			//directiveNumber++;
			
		}
	cout << "Total number of assembly instructions: " << loadStore + alu + compJmp << endl;
	cout << "Number of Load/Store: " << loadStore << endl;
	cout << "Number of ALU: " << alu << endl;
	cout << "Number of Compare/Jump: " << compJmp << endl;
}