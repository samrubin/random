#include <bits/stdc++.h>
using namespace std;


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
		

		char label[50] = {0};
		int lineNumber = 0;
		int alu = 0, loadStore = 0, compJmp = 0;
		char line[100];
		while ( !infile.eof()){
			infile.getline (line, 100);
			if (line.empty())
				continue;
			cout << line << endl;
			int charNum = 0;
			
			//whitespace(line,charNum);
			while (line[charNum] == ' ' || line[charNum] == '\t'){
				charNum++;
			}
			
			
			char operand[50] = {0};
			int operandNum = 0;
			
			while (line[charNum] != ' ' && line[charNum] != '\t' && line[charNum] != 0){
				
				if (line[charNum] == '#')
					continue;
				
				operand[operandNum] = line[charNum];
				operandNum++;
				charNum++;
				
				
			}
			cout << operand << endl;
		}
}
