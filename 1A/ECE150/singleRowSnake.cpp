#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int wallToWall;
	int snakeLength;
	int wallToSnake;
	
		// input wall to wall
	cout << "Wall to wall dimention: ";
	cin >> wallToWall;
		// Error check
	if (wallToWall <= 0){
		cerr << "Error: Invalid Input";
		return -1;
	}
		// input snake length
	cout << "Snake Length: ";
	cin >> snakeLength;
		// Error Check
	if (snakeLength < 0 || snakeLength > wallToWall){
		cerr << "Error: Invalid Input";
		return -1;
	}
	// input wall to snake tail
	cout << "Wall-to-snake tail distance: ";
	cin >> wallToSnake;
		// Error check
	if (wallToSnake < 0 || (wallToSnake + snakeLength) > wallToWall){
		cerr << "Error: Invalid Input";
		return -1;
	}
	
	cout << "|" << setw(wallToSnake+1); // sets the first wall then the space of Wall-to-snake
	for (int i = 1; i < snakeLength; ++i){	// sets the snake body
		cout << "o";
	}
	cout << "O";
cout	<< setw(wallToWall - (snakeLength+wallToSnake)+1) << "|" << endl; // sets spaces and then iputs the wall
	return 0;
}