#include <iostream>

using namespace std;

int main(){
	char word[100];
	int start;
	int end;
	
	cout << "Please input a word: ";
	cin >> word;
	cout << "Please input the starting index: ";
	cin >> start;
	if (start < 0){
		cerr << "Error: Invalid Input";
		return -1;
	}
	cout << "Please input the ending index: ";
	cin >> end;
	if (end < start){
		cerr << "Error: Invalid Input";
		return -1;
	}
	cout << "The extracted word is: ";
	for (int i = start; i <= end; ++i){
		cout << word[i];
	}
	return 0;
	
}