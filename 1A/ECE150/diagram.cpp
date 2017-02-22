#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	for (int i = 0; i<60; i++){
		system("cls");
		for (int k = 0; k < 60; k++){
			cout << "=";
		}
		cout << endl;
		for (int j = 0; j < i; j++){
			cout << " ";
		}
		cout << "O" << endl;
		for (int n = 0; n < 60; n++){
			cout << "=";
		}
		//for(int z = 0; z < 1000000; z++);
	}
}