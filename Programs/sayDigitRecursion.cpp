#include <bits/stdc++.h>
using namespace std;

void sayDigit(int n, string dig[]) {
    if(n == 0) {
        return;
    }

    sayDigit(n/10, dig);

    cout << dig[n % 10] << ' ';
}

int main() {

    int n;
    cin >> n;

    string digits[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    sayDigit(n, digits);

    return 0;
}