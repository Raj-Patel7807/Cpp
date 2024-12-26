#include <iostream>
using namespace std;

int main() {

    // Sum Of 1 to N; Time Complexity = O(1);
    // Constant Time Complexity;
    int N = 10;
    int sum = N * (N+1)/2;
    cout << sum << endl;

    // Nth Factorial; Time Complexity = O(n);
    int n = 5, fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    cout << fact << endl;

    // Bubble Sort; Time Complexity = O(n^2);
    int arr[5] = {2, 5, 3, 1, 4};
    for(int i=0; i<5-1; i++) {
        for(int j=0; j<5-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print Subarraays; Time Complexity = O(n^3);
    int array[3] = {1, 2, 3};
    for(int i=0; i<3; i++) {
        for(int j=i; j<3; j++) {
            for(int k=i; k<=j; k++) {
                cout << array[k] << " ";
            }
            cout << endl;
        }
    }

    // Binary Search; Time Comlexity = O(logn);
    int Arr[5] = {1, 2, 3, 4, 5};
    int target = 4;
    int s = 0, e = n-1, ans;
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(Arr[mid] < target) {
            s = mid + 1;
        } else if(Arr[mid] > target) {
            e = mid - 1;
        } else {
            ans = mid;
            break;
        }
    }
    cout << ans << endl;

    // Quick Sort; Merge Sort; Time Complexity = O(nlogn);

    // Recursion without Optimisation; Time Complexity = O(2^n);
    // Recursion without Optimisation in Permutation; Time Complexity = O(n!);

    // O(1) < O(logn) < O(n) < O(nlogn) < O(n^2) < O(n^3) < O(2^n) < O(n!);

    return 0;
}