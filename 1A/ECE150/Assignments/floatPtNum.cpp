#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double A, B;
	cout << "Enter two numbers (each seperated by a space): ";
	cin >> A >> B;
	cout << setprecision(20) << fixed << "A/B = " << A/B << endl;
	return 0;
}