#include <iostream>

using namespace std;

int main(){
	int input;
	unsigned long long factorial = 1;
	cout << "Enter a number: ";
	cin >> input;
	if ((input > 20) || input < 0 || cin.fail()){
		cerr << "Error: Invalid Input. Program Terminated.";
		return -1;
	}
	for (int i = 0; i < input; ++i){
		factorial *= (input - i);
	}
	cout << "Its factorial is " << factorial << endl;
	
	return 0;
}