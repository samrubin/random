#include <cmath>
#include <fstream>
#include "LakeTahoe.h"
using namespace std;

bool readTahoeData(char* filename, float lake[420][210]){
	ifstream infile;
	infile.open(filename);
	if (infile.bad()){
		return false;
	}
	int check;
	infile >> check;
	if (check != 420)
		return false;
	infile >> check;
	if (check != 210)
		return false;
	for (int i = 0; i < 420; ++i){
		for (int k = 0; k < 210; ++k){
			while (infile.peek() == ',' || infile.peek() == ' '){
				char test;
				infile.get(test);
			}
			
			infile >> lake[i][k];
		}
	}
	return true;
}
void cleanData(float lake[420][210]){
	float clean_data [420][210] = {0};
	
	
	float sumAround = 0.00;
	float avg = 0.00;
	
	int rows = 420;
	int columns = 210; 
	
	for (int i = 1; i < 419; i++){
		
		for (int j = 1; j < 209; j++){
			
			sumAround = lake[i][j-1] + lake[i][j+1] //left and right of the value
							+ lake [i-1][j-1] + lake[i-1][j] + lake [i-1][j+1] //the value on the above row 
							+ lake [i+1][j-1] + lake[i+1][j] + lake [i+1][j+1];
			
			avg = sumAround / 8;
			
			
			
			if ((abs(avg - lake[i][j])) > 100){ 
				clean_data[i][j] = ((avg * 10.00 + 0.5)/10.00);
			}
			
			
		}
	}
	
	
	
	for (int k = 0; k < 420; k++){
		
		for (int l = 0; l < 210; l++){
			
			if (clean_data[k][l] == 0){
				clean_data[k][l] = lake[k][l];
			}
			
		}
	}
	
	
	for (int n = 0; n < 420; n++){
		
		for (int o = 0; o < 210; o++){
			lake[n][o] = clean_data[n][o];
		}
	}	
	
	
	
	
	
} 

float area(float lake[420][210]){
	float area = 0;
	for (int i = 0; i < 420; ++i){
		for (int k = 0; k < 210; ++k){
			if (lake[i][k] < 0){
				area += (100 * 100);
			}
		}
	}
	return area;
}

float volume(float lake[420][210]){
	int count;
	float volume = 0.0;
	for (int i = 0; i < 420; ++i){
		for (int k = 0; k < 210; ++k){
			if (lake[i][k] < 0)
				volume += (-1 * (lake[i][k] * 100 * 100));
		}
	}
	return volume;
}