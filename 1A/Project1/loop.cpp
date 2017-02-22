#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
	ifstream infile;
	ofstream outfile("read.txt");
	infile.open(argv[1]);
	outfile.open("read.txt");
	
	char temp;
	while(infile >> temp){
		outfile << temp;
	}
	outfile.close();
	
	
}