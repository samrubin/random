#include <bits/stdc++.h>
using namespace std;


void fileName(char file[], char extention[], char endFile[], int fileNameLength){
	for (int i = 0; i < fileNameLength; ++i){
		endFile[i] = file[i];
	}
	for (int k = fileNameLength; k < fileNameLength + 4; ++k){
		endFile[k] = extention[k - fileNameLength];
	}
}

int main(int argc, char* argv[]){
	
	if (argc < 2){
		cerr << "Error: missing input file\n";
		return -1;
	}
		
	
	char file[100] = {0};
	char fileExtention[10] = {0};
	char fileInput[100] = {0};
	char fileOutput[100] = {0};
	char fileInputType[5] = {'.','t','x','t','\0'};
	char fileOutputType[4] = {'.','a','n','l'};
	int tmp;
	
	int fileNameLength;
	for (fileNameLength = 0; (argv[1][fileNameLength] != '.' && argv[1][fileNameLength] != 0); ++fileNameLength){
		file[fileNameLength] = argv[1][fileNameLength];
	}
	if (argv[1][fileNameLength] == 0)
		fileName(file, fileInputType, fileInput, fileNameLength);
	else{
		tmp = fileNameLength;
		while (argv[1][tmp] != 0){
			fileExtention[tmp-fileNameLength] = argv[1][tmp];
			tmp++;
		}
			if (strcmp(fileExtention,fileInputType)==0){
				fileName(file, fileInputType, fileInput, fileNameLength);
			}else {
				cerr << "Error: Invalid file extention\n";
				return -1;
			}
	}
	fileName(file, fileOutputType, fileOutput, fileNameLength);
	
	
	bool checkWords = false;
	const int FREQUENTWORD = argc-2;
	int frequentCount[FREQUENTWORD];
	checkWords = true;
	char fragment[FREQUENTWORD][14];
	if (argc-2 > 0){
		for (int k = 0; k < FREQUENTWORD; ++k){
			frequentCount[k] = 0;
			strncpy(fragment[k], argv[k+2], 14);
			int i = 0;
			while(fragment[k][i]){
				fragment[k][i] = tolower(fragment[k][i]);
				i++;
			}
		}
	}
	cout << fragment[0] << endl;
	ifstream infile;
	infile.open(fileInput);
	if (!infile.is_open()){
		cerr << "Error: The file did not open!\n";
		return 0;
	}
	//cout << fileInput << endl << fileOutput << endl;
	ofstream outfile;
	outfile.open(fileOutput);
	 if (!outfile.is_open()){
		 cerr << "There is an Error in the output file";
	 }
	int wordCount = 0;
	int wordMax = 0;
	int wordMin = 0;
	float avg = 0;
	
	while (!infile.eof()){
		char word[14] = {0};
		int wordSize = 0;
		char test;
		
		while (infile.get(test)){
			//cout << word << endl;
			if (wordSize == 14){
				break;
			}
			if(test >= 'A' && test <= 'Z'){
				word[wordSize++] = char(((int)test)+32);
			}else if ((test >= 'a' && test <= 'z')){
				word[wordSize++] = test;
			}else {
				break;
			}
		}
		if (word[0] == 0){
			continue;
		}
		for (int frag = 0; frag < FREQUENTWORD; frag++){
			int check = 0;
			while (word[check] != 0){
				int j = 0;
				int m = 1;
				while((fragment[frag][j]!=0)&&(m == 1)){
					if (word[check+j]!=fragment[frag][j]){
						m = 0;
					}
					j++;
				}
				if (m == 1){
					++frequentCount[frag];
				}
				++check;
			}
		}
		wordCount++;
		if (wordCount == 1){
			wordMax = wordSize;
			wordMin = wordSize;
		}
		if (wordSize > wordMax)
			wordMax = wordSize;
		else if (wordSize < wordMin)
			wordMin = wordSize;
		avg += wordSize;
		
	}
	avg = avg / wordCount;
	//cout << wordCount << endl;
	
	
	outfile << "Number of words: " << wordCount << endl;
	outfile << "Longest word: " << wordMax << endl;
	outfile << "Shortest word: " << wordMin << endl;
	outfile << setprecision(2) << fixed <<  "Average word length: " << avg << endl;
	
	for (int i = 0; i < FREQUENTWORD; i++){
		outfile << "Number of occurences of " << fragment[i] << ": " << frequentCount[i] << endl;
	}
	
	infile.close();
	outfile.close();
	
	
}