#include <iostream>

using namespace std;

int main(){
	
	int base, height;
	int area;
	
	cout << "Please provide the base of the triangle: " << endl;
	cin >> base;
	
	cout << "Please provide the height of the triangle: " << endl;
	cin >> height;
	
	area = base * height / 2;
	
	cout << "The area of the triangle is: "  << area << "." << endl;
	
	return 0;
	
}