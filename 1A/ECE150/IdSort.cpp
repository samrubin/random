#include <iostream>
using namespace std;

int main(){
	
	const int ARRAY = 5;
	
	int studentID[ARRAY] = {0};
	
	int newID;
	
	int position = 0;
	
	cout << "Enter 5 ID: ";
	
	for (int i = 0; i < ARRAY; ++i){
		
		cin >> studentID[i];
		
		if (cin.fail()){
			
			cerr << "Error: Invalid input" << endl;
			
			return -1;
			
		}
		
		if (studentID[i] < 10000000 || studentID[i] >= 100000000){
			
			cerr << "Error: Invalid Student ID" << endl;
			
			return -1;
		}
		
		for (int k = 0; k < i; k++){
			
			if (studentID[k] == studentID[i]){
				
				cerr << "Error: This student ID already exists" << endl;
				
				return 1;
			}
			
		}
		
	}
	bool swapped = true;

    int j = 0;

    int temp;
	
	int count = 0;

    while (swapped) {

        swapped = false;

        j++;

        for (int y = 0; y < ARRAY - j; y++) {

            if (studentID[y] < studentID[y + 1]) {

                temp = studentID[y];
				
                studentID[y] = studentID[y + 1];

                studentID[y + 1] = temp;

                swapped = true;
				
				count++;

            }

        }

    }
	
	cout << "Sorted ID: ";
	
	for (int z = 0; z < ARRAY; z++){
		
		cout << studentID[z] << " ";
	
	}
	
	cout << endl << "Swap count: " << count << endl << "Enter another input: ";
	
	cin >> newID;
	
	if (cin.fail()){
			
			cerr << "Error: Invalid input" << endl;
			
			return -1;
			
		}
		
	if (newID < 10000000 || newID >= 100000000){
			
		cerr << "Error: Invalid Student ID" << endl;
			
		return -1;
	}
		
	for (int k = 0; k < ARRAY; k++){
			
		if (studentID[k] == newID){
				
			cerr << "Error: This student ID already exists" << endl;
				
			return 1;
		}
			
	}
		
	while (newID < studentID[position] && position < ARRAY){
		
	position++;
		
	}
	
	cout << "The value " << newID << " is in position " << position << endl;
	
	return 0;
	
}