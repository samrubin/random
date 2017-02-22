#include <iostream>
using namespace std;

int main(){
	// declaring variables
	char name[20], email[20], city[20], state[20], country[20];
	long studentNumber;
	int dob;
	
	// input
	cout << "First Name : "; // asks for first name
	cin >> name; //inputs first name
	cout << "Date of birth (mmddyy) : "; // asks for date of birth in the form of mmddyy
	cin >> dob; // inputs date of birth
	cout << "Student number : "; // asks for student number
	cin >> studentNumber; // inputs student number
	cout << "Email address : "; // asks for email address
	cin >> email; // inputs email address
	cout << "City : "; // asks for the city
	cin >> city; // input the city
	cout << "Province/state : "; // asks for the province / state
	cin >> state;
	cout << "Country : "; // aks for the country
	cin >> country; // inputs the country
	cout << "Thank You! sign-up is complete!" << endl << endl;
	
	// sign up receipt
	cout << "This is your sign-up receipt : " << endl
		 << "FIRST NAME: " << name << endl
		 << "DATE OF BIRTH (MMDDYY) : " << dob << endl
		 << "STUDENT NUMBER: " << studentNumber << endl
		 << "EMAIL ADDRESS: " << email << endl
		 << "CITY: " << city << endl
		 << "PROVINCE/STATE: " << state << endl
		 << "COUNTRY: " << country << endl;
		 
	return 0;
}