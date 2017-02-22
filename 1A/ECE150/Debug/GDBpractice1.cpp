#include <iostream>
using namespace std;

int main()
{
     int a, b;
	 
	 cout << "Give me a number 0 and I will output a \"ZERO\"..." << endl;
	 
     cin >> a;
     if (a = 0)
	  cout << "ZERO!" << endl << endl;;

	 
	 cout << "Give me a number and I will divide it by 2..." << endl;
	 
	 cin >> a;
     cout << "The answer should be " << a * 0.5 << ", and my calculation is " << a / 2 << endl << endl;
  
  
	 cout << "Give me two numbers and I will tell you what is the remainder" << endl;
	 cout << "of the sum of them divided by 10..." << endl << endl;
	 
	 cout << "First Nubmer: " << endl;
	 cin >> a;
	 
	 cout << "Second Nubmer: " << endl;
	 cin >> b;
     cout << "The remainder of the sum devided by 10 is..." << a + b % 10 << endl << endl;
  
     return 0;
}