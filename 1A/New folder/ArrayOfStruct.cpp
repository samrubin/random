#include "ArrayOfStruct.h"
#include <iostream>
using namespace std;

int stringCmp(char str1[], char str2[]){
	int i = 0;

	do{
		if (str1[i] >= 'A' && str1[i] <= 'Z')
			str1[i] = char(((int)str1[i])+32);
		if (str2[i] >= 'A' && str2[i] <= 'Z')
			str2[i] = char(((int)str2[i])+32);
		if (str1[i] != str2[i])
			break;
		if (str1[i] == 0)
			return 0;
		i++;
	}while (true);
	return str1[i] - str2[i];
}

void peopleSwap(Person &a, Person &b){
	swap(a,b);
}

void bubbleSort(int numPeople, Person people[]){
	for (int i = numPeople; i > 0; --i){
	for (int k = 0; k < i - 1; ++k){
		
		int strComp = stringCmp(people[k].lastName, people[k+1].lastName);
		if (strComp == 0){
			strComp = stringCmp(people[k].firstName, people[k+1].firstName);
		}
		if (strComp == 0){
			if (people[k].age > people[k+1].age)
				strComp = 1;
		}
		if (strComp > 0){
				peopleSwap(people[k], people[k+1]);
	}
	
	
	
}
}
}

void displayNames(int numPeople, Person people[]){
	for (int k = 0; k < numPeople; ++k){
		cout <<people[k].firstName << " " << people[k].lastName << " " << people[k].age << endl;
} 
}