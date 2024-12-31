#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target);
int binary_search(vector<int> arr, int target, int st, int end); // Using Recursion;

int main() {

    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 4;

    cout << binarySearch(arr, target) << endl;
    cout << binary_search(arr, target, 0, arr.size()-1);

    return 0;
}

// Time Complexity = O(logn); Space Complexity = O(1);
int binarySearch(vector<int> arr, int target) {
    int st = 0, end = arr.size()-1;
    int mid;

    while(st <= end) {
        mid = st + (end - st)/2;  // mid = (st + end)/2;
        if(target > arr[mid]) {
            st = mid + 1;
        } else if(target < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}

// Time Complexity = O(logn); Space Complexity = O(logn);
int binary_search(vector<int> arr, int target, int st, int end) {
    int mid = st + (end - st)/2;

    if(st <= end) {

        if(target > arr[mid]) {
            binary_search(arr, target, mid+1, end);
        } else if(target < arr[mid]) {
            binary_search(arr, target, st, mid-1);
        } else {
            return mid;
        }
    }

    return -1;
}
