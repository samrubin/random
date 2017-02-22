#include <iostream>
#include <fstream>
using namespace std;

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

		//int lineNumber = 1;
		//int alu = 0, loadStore = 0, compJmp = 0;
		char line[100];
		while ( infile.getline (line, 100)){
			cout << line << endl;
		}
}

