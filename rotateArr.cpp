#include <bits/stdc++.h>
using namespace std;

void rightRotate(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> ans(n);

    for(int i=0; i<n; i++) {
        ans[(i+k) % n] = arr[i];
    }

    arr = ans;
}

void leftRotate(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> ans(n);

    for(int i=0; i<n; i++) {
        ans[i] = arr[(i+k) % n];
    }

    arr = ans;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    // leftRotate(arr, k);
    rightRotate(arr, k);

    for(auto &i : arr) {
        cout << i << ' ';
    } cout << endl;

    return 0;
}   