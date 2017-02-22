#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){
	ifstream infile;
	infile.open(argv[1]);
	while (infile.peek()!= -1){
		char c;
		infile.get(c);
		cerr << c; // submit this code once with "cerr", submit the second time with "cout"
	}
	return 0;
}