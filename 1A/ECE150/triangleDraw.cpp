#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int base;
	
	cout << "Please enter an odd size for the base of the trangle: ";
	cin >> base;
	if ((base%2) == 0|| base < 0){
		cerr << "Error: Invalid input";
		return -1;
	}
	int height = 1;
	
	int j = base;
	while(j > 0){
	cout << setw(height);
	for (int i = 0; i < j; ++i){
		cout << '*';
	}
	cout << endl;
	j-=2;
	height++;
	}
	
	
}