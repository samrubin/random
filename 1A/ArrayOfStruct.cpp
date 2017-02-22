#include <iostream>
#include "ArrayOfStruct.h"

using namespace std;


void displayNames(int numNames, Person people[]);
int stringCmp(char str1[], char str2[]);
void peopleSwap(char* &str1, char* &str2);

void bubbleSort(int numNames, Person people[]){
  for(int i = 0; i < numNames; i++){
    for(int j = 1; j < numNames - i; j++){
      int first_comparison = stringCmp(people[j-1].firstName, people[j].firstName);
      int last_comparison = stringCmp(people[j-1].lastName, people[j].lastName);
      if(last_comparison == -1 || (first_comparison == -1 && last_comparison == 0)){
        peopleSwap(people[j-1].lastName, people[j].lastName);
        peopleSwap(people[j-1].firstName, people[j].firstName);
    //    manual age swap
       //int temporary = people->age[j-1];
        //people->age[j-1] = people->age[j];
        //people->age[j] = temporary;
      }
    }
  }
}

void displayNames(int numNames, Person people[]){
  for(int i = 0; i < numNames; i++){
    cout << people[i].firstName<< " " << people[i].lastName<< " " << people[i].age << endl;
  }
}

int stringCmp(char str1[], char str2[]){
  int i = 0;
  while(str1[i] != 0 || str2[i] != 0){
    if (str1[i] > str2[i]){
      return -1;
    }
    else if (str1[i] < str2[i]){
      return 1;
    }
    i++;
  }
  return 0;
}


//takes two null terminated char strings(by ref) and swaps them
void peopleSwap(char* &str1, char* &str2){
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}
