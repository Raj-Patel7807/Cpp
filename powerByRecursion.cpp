#include <bits/stdc++.h>
using namespace std;

int power(int n, int m) {
    if(m == 0) {
        return 1;
    }
    if(m == 1) {
        return n;
    }

    if(m & 1) {
        return (n * power(n, m/2) * power(n, m/2)) % (long long)(1e9+7);
    } else {
        return (power(n, m/2) * power(n, m/2)) % (long long)(1e9+7);
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    cout << power(n, m) << endl;

    return 0;
}