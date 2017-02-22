#include <iostream>

using namespace std;

int main (){
	const int arraySize = 100;
	char text[arraySize];
	cout << "Enter a text without whitespace: ";
	cin >> text;

	int j = 0;
		while (text[j] != '\0'){
			++j;
		}
			cout << "The length of the entered text is: " << j;
			return 0;
}