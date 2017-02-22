#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

const double M_PI = 3.14159265358979323846;
void graphic();
void OverHeight() {
	// make it pass a certain height
	const double G = 9.8;
	double heightInitial;
	double heightFinal;
	double distance;
	double initialVelocityX;
	double initialVelocityY;
	double heightOfObject;
	double angle;


	cout << "Thank you for how to find out if your projectile will pass over a height!!!!\n";
	cout << "Are you going to give your velocity in component or with an angle?\n(Please use c for component or a for angular)\n";
	char velocityType;
	cin >> velocityType;
VelocityType:
	if (velocityType == 'c' || velocityType == 'C') {
		cout << "Please enter the x compenent of the velocity: ";
		cin >> initialVelocityX;
		//error(initialVelocityX);
		cout << "Please enter the y compenent of the velocity: ";
		cin >> initialVelocityY;
		//error(initialVelocityY);
	}
	else if (velocityType == 'a' || velocityType == 'A') {
		cout << "Please enter the velocity: ";
		double initialVelocity;
		cin >> initialVelocity;
		//error(initialVelocity);
		cout << "Are you going to enter the angle in degrees or radians?\n(Please use d for degrees and r for radians)\n";
		char angleType;
		cin >> angleType;

	Angle:
		if (angleType == 'd' || angleType == 'D') {
			cout << "What is the angle? ";
			cin >> angle;
			angle = angle * M_PI / 180;
			initialVelocityX = initialVelocity * cos(angle);
			initialVelocityY = initialVelocity * sin(angle);
		}
		else if (angleType == 'r' || angleType == 'R') {
			cout << "What is the angle? ";
			cin >> angle;
			initialVelocityX = initialVelocity * cos(angle);
			initialVelocityY = initialVelocity * sin(angle);
		}
		else {
			//do {
				cerr << "There was an invalid input! " << endl;
				cerr << "I was expecting to receive either d or r, but I received " << angle << endl;
				cerr << "Please enter d or r";
				cin.clear();
				cin >> angle;
				//error(angle);
			//} while (angle != 'd' || angle != 'D' || angle != 'R' || angle != 'r');
			goto Angle;
		}
	}
	else {
		//do {
			cerr << "There was an invalid input! " << endl;
			cerr << "I was expecting to receive either c or a, but I received " << velocityType << endl;
			cerr << "Please enter c or a";
			cin.clear();
			cin >> velocityType;
			//error(velocityType);
		//} while (velocityType != 'a' || velocityType != 'A' || velocityType != 'c' || velocityType != 'C');
		goto VelocityType;
	}
	cout << "Please enter your initial height: ";
	cin >> heightInitial;
	//error(height);
	cout << "Please enter the height you want to go over: ";
	cin >> heightOfObject;
	cout << "Please enter the distance to the height: ";
	cin >> distance;
	//error(distance);


	heightFinal = 0.5*(-G)*(distance / initialVelocityX)*(distance / initialVelocityX) + initialVelocityY * (distance / initialVelocityX);

	if ((heightOfObject > (heightFinal + heightInitial)) || (initialVelocityX < 0 && initialVelocityY < 0 && distance > 0) || (initialVelocityX > 0 && initialVelocityY > 0 && distance < 0)) {
		cout << "The projectile did not make it over the height! :(" << endl;
	}
	else if (heightOfObject < (heightFinal + heightInitial)) {
		cout << "The projectile made it over the height!!!!!!" << endl;
	}
	else {
		cerr << "They do not get close to each other!";
		return;
	}

}

int main() {
	overHeight();
	return 0;
}