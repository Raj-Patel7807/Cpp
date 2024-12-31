// Maximum Subarray Sum;

#include <iostream>
#include <climits>
using namespace std;

int main() {

    int n, maxSum = INT_MIN;

    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // // Brute Force Approach; Time Complexity = O(n^3);
    // for(int i=0; i<n; i++) {
    //     for(int j=i; j<n; j++) {
    //         int currSum = 0;
    //         for(int k=i; k<=j; k++) {
    //             currSum += arr[k];
    //             maxSum = max(maxSum, currSum);
    //         }
    //     }
    // }

    // // Optimised Approach; Time Complexity = O(n^2);
    // for(int i=0; i<n; i++) {
    //     int currSum = 0;
    //     for(int j=i; j<n; j++) {
    //         currSum += arr[j];
    //         maxSum = max(maxSum, currSum);
    //     }
    // }

    // Most Optimised Approach; Time Complexity = O(n);
    // Kadane's Algorithm;
    int currSum = 0;
    for(int i=0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0) {
            currSum = 0;
        }
    }

    cout << maxSum << endl;

    return 0;
}