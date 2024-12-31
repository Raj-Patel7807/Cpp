#include <bits/stdc++.h>
using namespace std;

void reverseArr1(int arr[], int n, int i) {
    if(i >= n/2) {
        return;
    }

    swap(arr[i], arr[n-i-1]);

    reverseArr1(arr, n, i+1);
}

// void reverseArr(int arr[], int s, int e) {
//     if(s > e) {
//         return;
//     }

//     swap(arr[s], arr[e]);

//     reverseArr(arr, s+1, e-1);
// }

int main() {

    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    // reverseArr(arr, 0, n-1);
    reverseArr1(arr, n, 0);

    for(int i=0; i<n; ++i) {
        cout << arr[i] << ' ';
    } cout << endl;

    return 0;
}