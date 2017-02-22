#include <iostream>
#include "Sorting.h"
using namespace std;

int stringCmp(char str1[], char str2[]){
	int i;
	char* a = str1;
	char* b = str2;
	for (i = 0; a[i] == b[i]; ++i){
		if (a[i] == '\0')
			return 0;
	}
	return a[i] - b[i];
}

void stringSwap(char* &str1, char* &str2){
	char* temp = str1;
	str1 = str2;
	str2 = temp;
}

void displayNames(int numNames,char* firstName[],char* lastName[],int age[]){
	for (int i = 0; i < numNames; ++i){
		cout << firstName[i] << " " << lastName[i] << " " << age[i] << endl;
	}
}

void bubbleSort(int numNames,char* firstName[],char* lastName[],int age[]){
	for (int i = numNames; i > 0; --i){
	for (int k = 0; k < i - 1; ++k){
		int strComp = stringCmp(lastName[k], lastName[k+1]);
		if (strComp == 0){
			strComp = stringCmp(firstName[k], firstName[k+1]);
		}
		if (strComp == 0){
			if (age[k] > age[k+1])
				strComp = 1;
		}
		if (strComp > 0){
				stringSwap(firstName[k], firstName[k+1]);
				stringSwap(lastName[k], lastName[k+1]);
				int temp = age[k];
				age[k] = age[k+1];
				age[k+1] = temp;
	}
}
}
}