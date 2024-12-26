#include <iostream>
using namespace std;

int decToBin(int decNum);

int main() {

    int decNum;

    cout << "Enter a Decimal Number : ";
    cin >> decNum;

    cout << "Binary Form of " << decNum << " is : ";
    cout << decToBin(decNum) << "\n";

    return 0;
}

int decToBin(int decNum) {

    int ans = 0, fact = 1;

    while(decNum > 0) {
        int rem = decNum % 2;
        ans += rem*fact;
        decNum /= 2;
        fact *= 10;
    }

    return ans;
}