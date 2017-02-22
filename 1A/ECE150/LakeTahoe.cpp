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
			while (infile.peek() == ','){
				char test;
				infile >> test;
			}
			
			infile >> lake[i][k];
		}
	}
	return true;
}

void cleanData(float lake[420][210]){
	float clean[420][210] = {0};
	for (int i = 1; i <= 418; ++i){
		for (int k = 1; k <= 208; ++k){
			float aroundAreaAvg = (lake[i-1][k-1] + lake[i-1][k] + lake[i-1][k+1] // top row
									+ lake[i+1][k+1] + lake[i+1][k] + lake[i+1][k-1] // bottom row
									+lake[i][k-1] + lake[i][k+1]) // sides
									/ 8.0; // average
			
			if ( lake[i][k] - aroundAreaAvg > -100 || lake[i][k] - aroundAreaAvg < 100){
				clean[i][k] = aroundAreaAvg;
			}
		}
	}
	for (int i = 1; i <= 418; ++i){
		for (int k = 1; k <= 208; ++k){
			if (clean[i][k] != 0)
				lake[i][k] = clean[i][k];
		}
	}
}

float area(float lake[420][210]){
	float area = 0.0;
	for (int i = 0; i < 420; ++i){
		for (int k = 0; k < 210; ++k){
			if (lake[i][k] < 0)
				area += (100.0 * 100.0);
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