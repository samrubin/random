#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	const int WIDTH = 60;
	const int ARRAY_SIZE = 8;
	char marquee[ARRAY_SIZE] = {'!','E','C','E','1','5','0','!'};
	int input;
	cin >> input;
	int times = input; // switching the int to stop a bug
	system("cls");
	for (int i = 0; i<=(times * WIDTH); i++){    // loops the function input * 60
		int line = (i % WIDTH);  // line is the the step in the marquee between 0 and 59
		
		
		for (int k = 0; k < WIDTH; k++){   // outputs the upper border
			cout << "=";
		}
		
		cout << endl;

		char marqueeLine[WIDTH] = {0};  // sets the array that is going to be displayed
		
		for (int a = 0; a < WIDTH; ++a){
			marqueeLine[a] = ' ';
		}
		
		for (int g = 0; g < ARRAY_SIZE; g++){
			marqueeLine[(i+g)%WIDTH] = marquee[g];
		}
		
		for (int j = 0; j < WIDTH; j++){  // cout marquee display
			cout << marqueeLine[j];
		}
		
		cout << endl;
		
		for (int n = 0; n < WIDTH; n++){  // output the lower border
			cout << "=";
		}
		
		for(int z = 0; z < 100000; z++){ // slows down the computer
		z = (z+z)/2;
		}
		cout << endl;
		
		if (i != times * WIDTH){
		system("cls");  // clears the screen
		}
	}
}

