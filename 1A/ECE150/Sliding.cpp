#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int convertToIntArray(int argc, char* argv[], int Volatge[]){
	int windowSize = 0;
	int i = 1;
	if (argc > 22 || argc < 2){
		cerr << "Error: too many input arguments; maximum 20\n";
		return -21;
	}
	int numArguments = 0;
	int number = 0;
	int negative = 1;
	int k = 0;
	//char checkInt;
	bool minus;
	
	for (i; i < argc; i++){
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
				return -numArguments;
			}
			if (argv[i][k] >= '0' && argv[i][k] <= '9'){
				number *= 10;
				number += (argv[i][k]-48);
			} else{
				cerr << "Error: Argument " << numArguments << " is not an interger.\n";
				return -numArguments;
			}
			k++;
			//checkInt = argv[i][k];
			
			//numArguments++;
		}
		
		
		number *= negative;
			if (i == 1)
				windowSize = number;
			else
			Volatge[i-2] = number;
			
	}
	return windowSize;
}
int slideAvg(int inputVoltages[], int sampleSize, int windowSize, float slidingAverage[]){
	int slidingNumber = (sampleSize - windowSize + 1);
	
	for (int i = 0; i < slidingNumber; ++i){
		float average = 0;
		
		for (int k = i; k < windowSize+i;++k){
			average += inputVoltages[k]; 
		}
		slidingAverage[i] = average/windowSize;
	}
	return slidingNumber;
} 

void displayHistogram(int numElements, float array[]){
	cout << "100V------105V------110V------115V------120V------125V------130V------135V------140V" << endl;
	for (int i = 0; i < numElements; ++i){
		float element = (floor(((array[i])*2)+0.5)/2);
		if (element < 100){
			cout << "!" << endl;
		} else if (element > 140) {
				for (int j = 0; j < 81; j++){
					cout << "#";
				}
				cout << "+" << endl;
		} else {
			for (float k = 100; k <= element; k += 0.5){
				cout << "#";
			}
			cout << endl;
		}
	}
}

int main (int argc, char* argv[]){
	int inputVoltages[20] = {0};
	float slidingAverage[20] = {0};
	int sampleSize = argc-2;
	int windowSize = convertToIntArray(argc, argv, inputVoltages);
	if (windowSize < 1 || windowSize > argc -2){
		cerr << "Error: Invalid input";
		return -1;
	}
	
	
	int slidingNumber = slideAvg(inputVoltages, sampleSize, windowSize, slidingAverage);
	 float inputVoltage[20] = {0};
	  for(int g = 0; g < sampleSize; g++){
		inputVoltage[g] = inputVoltages[g];
	  }
	 // cout << endl;
	displayHistogram(sampleSize, inputVoltage);
	cout << endl;
	displayHistogram(slidingNumber, slidingAverage);
	cout << endl;
}