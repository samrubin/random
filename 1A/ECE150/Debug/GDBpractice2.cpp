#include <iostream>

using namespace std;

int main(){
	
	int n;
	
	cout << "Give me n and I will provide you with Fn...";
	cin >> n;
	
	//First Condition
	if(n == 0) {
		cout << "Result: " << 0 << endl;
	}
	//Otherwise, Second Condition
	else if(n == 1) {
		cout << "Result: " << 1 << endl;
	}
	//If all checks fail, do the following
	else{
		int k = 1;
		int Fkm1 = 0;
		int Fk = 1;
		int Fk_old = Fk;
		
		while(k != n){
			k = k + 1; //OR, k += 1;  // OR k++;
			Fk = Fk + Fkm1; //OR, Fk += Fkm1;
			Fkm1 = Fk; 
			Fk_old = Fk;
		}
		
		cout << "Result: " << Fk << endl;
	}
	
	return 0;
	
	
}