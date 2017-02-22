#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main (){
	int number[3];
	cout << "Enter two integers to add: ";
	cin >> number[0] >> number[1]; 
	bool valid = cin.good();
	
	if (!valid){
			cerr << "Error: Invalid input. Not a number.\n";
			return -1;
	}
	else{
			char next = cin.get(); // Read one character from the cin stream 
		bool endOfInt = (next == ' ') || (next == '\n'); 
		if (!endOfInt){
			cerr << "Error: Invalid imput. Not an integer.\n";
			return -1;
		}
		else {
			number[2] = number[0] + number[1];
				
				if (number[0] <= (INT_MAX - abs(number[1]))){
				
				//if (number[0] >= INT_MAX || (number[1]) >= INT_MAX || number[0] <= INT_MIN || number[1] <= INT_MIN){
					cerr << "Error: Summed value out of the signed int range.\n";
					return 1;
				}
				
		else 
			cout << "Sum of two numbers is: " << number[2] << endl;
			
		}
	}
	return 0;
}