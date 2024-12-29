#include <bits/stdc++.h>
using namespace std;

int swk(int usr, int comp);

int main() {
	int usr, comp, result;
	
	random_device rd; // Seed for the random number engine;
    mt19937 gen(rd()); // Twister random number generator;
    uniform_int_distribution<> dis(0, 2); // Range [0, 2];
    comp = dis(gen); // Generate Random Number;

	//user input;
	cout << "Enter 0 for snack, 1 for water and 2 for gun : ";
	cin >> usr;

    if(usr < 0 || usr > 2) {
        cout << "Please Enter Valid Number..!!" << endl;
        return 0;
    }
	
	//calculate result;
	result = swk(usr, comp);
	
	cout << "You choose " << usr << endl;
	cout << "Computer choose " << comp << endl;
	
	//saw result;
	if(result == 0) {
		cout << "It's a Draw!!" << endl;
	} else if(result == 1) {
		cout << "You Won!!" << endl;
	} else {
		cout << "You Lose!!" << endl;
	}
	
	return 0;
}

int swk(int usr, int comp) {
	if(usr == comp) {
		return 0;
	} else if ((usr == 0 && comp == 1) || (usr == 1 && comp == 2) || (usr == 2 && comp == 0)) {
        return 1;
	} else {
		return -1;
	}
}