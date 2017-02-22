#include <iostream>
using namespace std;

int main(){

	char password[3];
	cout << "Enter three characters consecutivly without space: ";
	cin >> password;
	cout << 1000000*(int)password[0] + 1000*(int)password[1] + (int)password[2] << endl;
	return 0;
}
