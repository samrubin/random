#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double price, discount, tax;
	cout << "Enter the offer price of the item: ";
	cin >> price;
	cout << "Discount rate (%) : ";
	cin >> discount;
	cout << "Tax rate (%) : ";
	cin >> tax;
	cout << setprecision(2) << fixed << "The net price of the item is: $" <<  price * (1-discount / 100) * (tax / 100 + 1) << endl;
	return 0;
}