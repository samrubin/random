#include <iostream>
#include <climits>
using namespace std;

// DETAILS OF THE strToInt function
int strToInt(char* str){
	// Define variables to store the number to be converted, the current digit position, and the char value of the current digit  
	unsigned int number = 0;
	unsigned int maxValue = INT_MAX;
	unsigned int currDigit = 0;
	char currDigitStr = str[0];

	bool minusSign = (currDigitStr == '-');
	if (minusSign){
		currDigit = 1;
		currDigitStr = str[1];
		maxValue = maxValue+1;
	}
	
	while (currDigitStr != '\0'){
		

		if (currDigitStr < '0' || currDigitStr > '9'){
			cerr << "Error in integer string conversion" << endl;
			return INT_MIN;
		}
		
		if ( number > maxValue/10 ){
			cerr << "Error: Numerical value of text string is beyond limits of int variables" << endl;
			return INT_MIN;
		}
		else
			number *= 10;

		unsigned int currDigitIntValue = currDigitStr - '0';
		if ( currDigitIntValue > maxValue-number ){
			cerr << "Error: Numerical value of text string is beyond limits of int variables" << endl;
			return INT_MIN;
		}
		else
			number += currDigitIntValue;
		
		// C. Move to the next digit and update the digit's char value accordingly 
		currDigit++;
		currDigitStr = str[currDigit];
	}
	
	// 3. If there is a minus sign, return the negated value of the number; 
	//	  otherwise, just return the number value
	return minusSign? (-number) : number;
}


int convertToIntArray(int argc, char* argv[], int array[]){
	int i = 1;
	
	for (i = 1; i < argc; ++i){
		int check =  strToInt(argv[i]);
		if (check == INT_MIN){
			return -i;
		}
		array[i-1] = check;
	}
	return i-1;
}
int findMax (int array[], int numElements){
	int max = array[0];
	for (int i = 1; i < numElements; ++i){
		if (max < array[i]){
			max = array[i];
		}
	}
	return max;
}
int findMin (int array[], int numElements){
	int min = array[0];
	for (int i = 1; i < numElements; ++i){
		if (min > array[i]){
			min = array[i];
		}
	}
	return min;
}
float average(int array[], int numElements){
	float sum = 0.0;
	for (int i = 0; i < numElements; ++i){
		sum += (float)array[i];
	}
	return sum/numElements;
}

int main(int argc, char* argv[]){
	int array[21] = {0};
	int numElements =  convertToIntArray(argc, argv, array);
	if (numElements < 0){
		return numElements;
	 }
	int max = findMax(array, numElements);
	int min = findMin(array, numElements);
	float ave = average(array, numElements);
	
	cout << "Maximim: " << max << endl;
	cout << "Minimum: " << min << endl;
	cout << "Average: " << ave << endl;
	
	//cout << argc << endl << argv[1];
	return 0;
	
}