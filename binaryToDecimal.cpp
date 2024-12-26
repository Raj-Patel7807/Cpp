#include <iostream>
using namespace std;

int binToDec(int binNum);

int main() {

    int binNum;

    cout << "Enter a Binary Number : ";
    cin >> binNum;

    cout << "Decimal Form of " << binNum << " is : ";
    cout << binToDec(binNum);

    return 0;
}

int binToDec(int binNum) {

    int ans = 0, fact = 1;

    while(binNum > 0) {
        int rem = binNum % 10;
        ans += rem*fact;
        binNum /= 10;
        fact *= 2;
    }

    return ans;
}