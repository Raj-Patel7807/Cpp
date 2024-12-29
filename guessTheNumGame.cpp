#include <bits/stdc++.h>
using namespace std;

int main() {

    random_device rd; // Seed for the random number engine;
    mt19937 gen(rd()); // Twister random number generator;
    uniform_int_distribution<> dis(1, 100); // Range [1, 100];

    int randomNum, guessedNum;
	int count = 0;
	randomNum = dis(gen); // Generate Random Number;
	
	cout << "Guess the Number between 1 and 100 : " << endl;
	
	do{
		cin >> guessedNum;
		if(guessedNum > randomNum) {
			cout << "Lower Number Please..!!" << endl;
		}
		if(guessedNum < randomNum) {
			cout << "Higher Number Please..!!" << endl;
		}
		if(guessedNum==randomNum) {
			cout << "Correct..!!" << endl;
		}
		count++;
	} while(guessedNum != randomNum);

    cout << "You Guessed in " << count << " try..!!" << endl;

    return 0;
}