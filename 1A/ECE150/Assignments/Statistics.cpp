#include <iostream>
#include<climits>
using namespace std;

int convertToIntArray(int argc, char* argv[], int array[]){
	int i = 0;
	int numElements = 1
	if (argc > 20 || argc < 2){
		cerr << "Error: too many input arguments; maximum 20\n";
		return -21;
	}

	int number = 0;
	int negative = 1;
	int k = 0;
	//char checkInt;
	bool minus;
	
	for (i = 1; i < argc; i++){
		number = 0;
		negative = 1;
		k = 0;
		//checkInt = argv[i][k];
		minus = (argv[i][k] == '-');
		
		
		if (minus){
			negative = -1;
			k = 1;
			//checkInt = argv[i][k];
		}
		
		while (argv[i][k] != '\0'){
			if (number > INT_MAX /10){
				cerr << "Error: the number is too large\n" << number << endl;
				return -(i-1);
			}
			if (argv[i][k] >= '0' && argv[i][k] <= '9'){
				number *= 10;
				number += (argv[i][k]-48);
			} else{
				cerr << "Error: Argument " << i-1 << " is not an interger.\n";
				return -(i-1);
			}
			k++;
			//checkInt = argv[i][k];
			
			
		}
		
		number *= negative;
			array[i-1] = number;
			
			numElements++
			
	}
	return numElements;
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
	int numElements = convertToIntArray(argc, argv, array);
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