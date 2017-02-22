#include <iostream>
using namespace std;

int main (){
	char resistor[4];
	double value[4];
	cout << "Enter the four resistor color codes: ";
	cin >> resistor;
	
	for(int i = 0; i <= 1; i++){
		
		switch (resistor[i]){
			case 'k':
				value[i] = 0;
				break;
			case 'n':
				value[i] = 1;
				break;
			case 'R':
				value[i] = 2;
				break;
			case 'O':
				value[i] = 3;
				break;
			case 'Y':
				value[i] = 4;
				break;
			case 'G':
				value[i] = 5;
				break;
			case 'B':
				value[i] = 6;
				break;
			case 'V':
				value[i] = 7;
				break;
			case 'y':
				value[i] = 8;
				break;
			case 'W':
				value[i] = 9;
				break;	
			default:
				cerr << "Error: Invalid color code entered!";
				return -1;
				break;
		}			
	}
	switch (resistor[2]){
			case 'k':
				value[2] = 1;
				break;
			case 'n':
				value[2] = 10;
				break;
			case 'R':
				value[2] = 100;
				break;
			case 'O':
				value[2] = 1000;
				break;
			case 'Y':
				value[2] = 10000;
				break;
			case 'G':
				value[2] = 100000;
				break;
			case 'B':
				value[2] = 1000000;
				break;
			case 'V':
				value[2] = 10000000;
				break;
			case 'y':
				value[2] = 100000000;
				break;
			case 'W':
				value[2] = 1000000000;
				break;	
			case 'd':
				value[2] = 0.1;
				break;
			case 'S':
				value[2] = 0.01;
				break;
			default:
				cerr << "Error: Invalid color code entered!";
				return -1;
				break;
	}
		switch (resistor[3]){
			case 'n':
				value[3] = 0.01;
				break;
			case 'R':
				value[3] = 0.02;
				break;
			case 'G':
				value[3] = 0.005;
				break;
			case 'B':
				value[3] = 0.0025;
				break;
			case 'V':
				value[3] = 0.001;
				break;
			case 'y':
				value[3] = 0.0005;
				break;
			case 'd':
				value[3] = 0.05;
				break;
			case 'S':
				value[3] = 0.1;
				break;
			case 'N':
				value[3] = 0.2;
				break;
			default:
				cerr << "Error: Invalid color code entered!";
				break;
	}
	double resistance = (value[0] * 10 + value[1]) * value[2];
	double error = resistance * value[3];
	
	cout << "Resistance is " << resistance << " ohms (+/-" << error << "ohms tolerance" << endl;
	return 0;
}