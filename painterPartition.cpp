#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowTime);
int minTimeToPaint(vector<int> &arr, int n, int m);

int main() {

    int n = 4, m = 2;
    vector<int> arr = {40, 30, 20, 10};

    cout << minTimeToPaint(arr, n, m) << endl;
    
    return 0;
}

bool isPossible(vector<int> &arr, int n, int m, int maxAllowTime) { // O(n);
    int painter = 1, time = 0;

    for(int i=0; i<n; ++i) {
        if(arr[i] > maxAllowTime) {return false;}
        if(time + arr[i] <= maxAllowTime) {
            time += arr[i];
        } else {
            painter++;
            time = arr[i];
        }
    }
    return painter <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m) { // O(n * log(maxTime));
    int ans = -1;
    int minTime = INT_MIN, maxTime = 0;
    for(int i=0; i<n; ++i) { // O(n);
        maxTime += arr[i];
        minTime = max(minTime, arr[i]);
    }

    if(m > n) {return minTime;}

    int st = minTime, end = maxTime, mid;

    while(st <= end) { // O(log(maxTime));
        mid = st + (end-st)/2;

        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}
