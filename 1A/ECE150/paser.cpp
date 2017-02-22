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
	cerr << "Error on line " <<  lineNumber << ": Invalid OPCODE";
}

void ErrorOperand(int lineNumber){
	cerr << "Error on line " << lineNumber << ": Invalid OPERAND";
}

void ErrorEnd(int lineNumber){
	cerr << "Error on line " << lineNumber << ": extra input after the Operand";
}

int checkEnd(char* line, int charNum, int lineNumber){
	do{
		if (line[charNum] == '#'){
			return 1;
		} else if (line[charNum] != ' ' && line[charNum] != '\t' && line[charNum] != 0){
			ErrorEnd(lineNumber);
			return 0;
		}
		charNum++;
	}while(line[charNum] != 0);
	return 1;
}

bool Ri(char* line, int charNum, int lineNumber){
	if (line[charNum] == 'R'){
		while(line[charNum] != ' ' && line[charNum] != '\t' && line[charNum] != ','){
			int check = 0;
			if (line[charNum] < '0' && line[charNum] > '9' && check > 0){
				ErrorOperand(lineNumber);
				return 0;
			}
			operand[opNum] = line[charNum];
		}
	} else {
		ErrorOperand(lineNumber);
		return 0;
	}
}

int load(char* line, int charNum, int lineNumber){
	char* operand;
	int opNum = 0;
	while(line[charNum] == ' ' || line[charNum] == '\t'){
		charNum++;
	}
	if(line[charNum] >= '0' && line[charNum] <= '9'){
		while(line[charNum] >= '0' && line[charNum] <= '9'){
			operand[opNum] = line[charNum];
			opNum++;
			charNum++;
		}
	} else if (line[charNum] == 'R'){
		while(line[charNum] != ' ' && line[charNum] != '\t' && line[charNum] != ','){
			int check = 0;
			if (line[charNum] < '0' && line[charNum] > '9' && check > 0){
				ErrorOperand(lineNumber);
				return 0;
			}
			operand[opNum] = line[charNum];
		}
	} else {
		ErrorOperand(lineNumber);
		return 0;
	}
	while (line[charNum] != ','){
		if (line[charNum] != ' ' && line[charNum] != '\t' && line[charNum] != ','){
				ErrorOperand(lineNumber);
				return 0;
		}
		charNum++;
	}
	while(line[charNum] == ' ' || line[charNum] == '\t'){
		charNum++;
	}
	if (line[charNum] == 'R'){
		while(line[charNum] != ' ' && line[charNum] != '\t' && line[charNum] != ','){
			int check = 0;
			if (line[charNum] < '0' && line[charNum] > '9' && check > 0){
				ErrorOperand(lineNumber);
				return 0;
			}
			operand[opNum] = line[charNum];
		}
	} else {
		ErrorOperand(lineNumber);
		return 0;
	}
	return checkEnd(line, charNum, lineNumber);
}

int LDiSDi (char* line, int charNum, int lineNumber){
	
}

int main(int argc, char* argv[]){
		if (argc != 2){
			cerr << "Error: Invalid Input Commands";
			return -1;
		}
		ifstream infile;
		infile.open(argv[1]);
		
		if (!infile.is_open){
			cerr << "Error: File did not open";
			return -1;
		}
		enum opcode {LD, LDi, SD, SDi, ADD, ADDi, SUB, SUBi, MUL, MULi, DIV, DIVi, JMP, JZ, JNZ,JGZ, JGEZ, JLZ, JLEZ, #, Directive, Label, Error};

		int lineNumber = 1;
		int alu = 0, loadStore = 0, compJmp = 0;
		char* line;
		while ( getline (intfile,line)){
			bool continueLine = true;
			opcode opCode;
			int charNum = 0;
	int codeNum = 0;
	char code[50];
	while(line[charNum] == ' ' || line[charNum] == '\t'){
		charNum++
	}
	while (line[charNum] != ' ' && line[charNum] != '\t' && line[charNum] != '\n' && continueLine){
		code[codeNum] = line[charNum];
		if (code[codeNum] == '#')
			continueLine = false;
		codeNum++;
	}
	char* label[21] = {"LD", "LDi", "SD", "SDi", "ADD", "ADDi", "SUB", "SUBi", "MUL", "MULi", "DIV", "DIVi", "JMP", "JZ", "JNZ", "JGZ", "JGEZ", "JLZ", "JLEZ", "Code:", "Data:"}
	
	for (int i = 0; i < 21; ++i){
		if (strCmp (code, label[i]))
			break;
	}
	switch (i){
		case 1: 
			opCode = LD;
			loadStore += load(line, charNum, lineNumber);
			break;
		case 2: 
			opCode = LDi;
			break;
		case 3: 
			opCode =  SD;
			break;
		case 4:
			opCode SDi;
			break;
		case 5: 
			opCode ADD;
			break;
		case 6: 
			opCode ADDi;
			break;
		case 7: 
			opCode SUB;
			break;
		case 8:
			opCode SUBi;
			break;
		case 9: 
			opCode MUL;
			break;
		case 10: 
			opCode MULi;
			break;
		case 11: 
			opCode DIV;
			break;
		case 12: 
			opCode DIVi;
			break;
		case 13: 
			opCode JMP;
			break;
		case 14: 
			opCode JZ;
			break;
		case 15:
			opCode JNZ;
			break;
		case 16: 
			opCode JGZ;
			break;
		case 17: 
			opCode JGEZ;
			break;
		case 18: 
			opCode JLZ;
			break;
		case 19:
			opCode JLEZ;
			break;
		case 20: 

		case 21: 
			opCode Directive;
			break;
		default:
			if (code[codeNum] == ':'){
				opCode = Label;
			} else {
				continueLine = false;
				ErrorOp(lineNumber)
			}
			
	}
	if ()
	
	
	
	
	
}

		}
			
}