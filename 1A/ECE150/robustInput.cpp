#include <iostream>
using namespace std;

int main (){
	int number; 
	cout << "Enter an integer: ";
	cin >> number; 
	bool valid = cin.good();
	
	if (valid){ 
		char next = cin.get(); // Read one character from the cin stream 
		bool endOfInt = (next == ' ') || (next == '\n'); 
		if (!endOfInt){
			cerr << "Error: Invalid imput. Not an integer.\n";
			return -1;
		}
		else {
			cout << "The integer that you have entered is " << number << endl;
		}
	}
	else{
					cerr << "Error: Invalid input. Not a number.\n";
			return -1;
	}

	return 0;
}

