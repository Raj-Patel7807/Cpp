#include <bits/stdc++.h>
using namespace std;

long double eps = 1e-11;

long double power(long double base, int pw) {
    long double ans = 1;
    for(int i=0; i<pw; i++) ans *= base;
    return ans;
}

long double root(long double base, int pw) {
    long double start = 1, end = base, mid;

    while(end - start > eps) {
        mid = start + (end - start) / 2;
        if(power(mid, pw) < base) {
            start = mid;
        } else {
            end = mid;
        }
    }
    return start;
}

int main() {

    long double base;
    int pw;
    cin >> base >> pw;

    cout << fixed << setprecision(10);
    cout << "root(" << base << ", " << pw << ") = " << root(base, pw) << endl;

    return 0;
}
