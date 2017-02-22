#include <iostream>
#include <fstream>
#include "Homework.h"
using namespace std;

void print(HomeworkQueue*& q)
{
	cout << endl;
	HomeworkQueue* temp = q;
	while(temp != NULL)
	{
		cout << temp->assgn->course << " " << temp->assgn->assnNum << " " << temp->assgn->dueMonth 
		     << " " <<  temp->assgn->dueDay <<" " << temp->assgn->description << endl;
		temp = temp->next;
	}
	cout << endl;
}


int main()
{
	HomeworkQueue* q = 0;
	
	// Assignment a1 = { "ECE 150", 7, 12, 5, "linked list" };
	// enqueue(&a1, q);
	// Assignment a2 = {"ECE 150", 6, 11, 25, "struct"};
	// enqueue(&a2, q);
	// Assignment a3 = {"ECE 100", 3, 12, 5, "final report"};
	// enqueue(&a3, q);
	// Assignment a4 = {"Math 117", 9, 11, 30, "partial fraction"};
	// enqueue(&a4, q);
	// Assignment a5 = {"ECE 105", 10, 12, 2, "momentum"};
	// enqueue(&a5, q);
	// Assignment a6 = {"CHE 102", 10, 12, 1, "reaction kinetics"};
	// enqueue(&a6, q);
	// Assignment a7 = {"ECE 100", 10, 11, 29, "eating food"};
	// enqueue(&a7, q);
	// Assignment a8 = {"Mah 117", 10, 12, 6, "wondering why we do definations"};
	// enqueue(&a8, q);
	// Assignment a9 = {"Faternity", 10, 11, 30, "drinking"};
	// enqueue(&a9, q);
	// Assignment a10 = {"Party", 10, 12, 1, "no description needed"};
	// enqueue(&a10, q);
	// Assignment a11 = {"TUT 105", 10, 12, 4, "no idea how so solve"};
	// enqueue(&a11, q);
	Assignment a1 = {"ECE 1051", 1, 2, 25, "momentum"};
	enqueue(&a1, q);
	Assignment a2 = {"ECE 1052", 2, 3, 13, "momentum"};
	enqueue(&a2, q);
	Assignment a3 = {"ECE 1053", 3, 4, 15, "momentum"};
	enqueue(&a3, q);
	Assignment a4 = {"ECE 105", 4, 4, 15, "momentum"};
	enqueue(&a4, q);
	
	
	
	print (q);
	
	const Assignment* a;
	
	for(int i = 0; i < 4; i++)
	{
		a = dequeue(q);
		cout <<a->course << " assignment " << a->assnNum << " is taken off the to do list on " << a->dueMonth << '/' << a->dueDay<< endl;
	}
		
	return 0;
}

/*
Sample Output:

ECE 150 6 11 25 struct
Math 117 9 11 30 partial fraction
ECE 105 10 12 2 momentum
ECE 150 7 12 5 linked list
ECE 100 3 12 5 final report

ECE 150 assignment 6 is taken off the to do list on 11/25
Math 117 assignment 9 is taken off the to do list on 11/30
ECE 105 assignment 10 is taken off the to do list on 12/2
ECE 150 assignment 7 is taken off the to do list on 12/5
ECE 100 assignment 3 is taken off the to do list on 12/5

*/

