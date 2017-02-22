#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int num, dig;
	cout << "Enter two interger numbers (seperated by a space): ";
	cin >> num >> dig;
	int bit[8] = {0};
	for (int i = 0; i < 8; i++){
		bit[i] = num % 2;
		num /= 2;
	}
	cout << "The value of Bit " << dig << " is " << bit[dig] << endl;
}