#include <bits/stdc++.h>
using namespace std;

int climbingWays(int n) {
    if(n == 0 || n == 1) {
        return  1;
    }

    return (climbingWays(n-1) + climbingWays(n-2));
}

int main() {

    int n;
    cin >> n;

    cout << climbingWays(n) << endl;

    return 0;
}