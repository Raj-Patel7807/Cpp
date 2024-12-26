#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int majorityElement(vector<int> vec);
int majority_element(vector<int> vec);
int MajorityElement(vector<int> vec);

int main() {

    vector<int> vec = {1, 2, 2, 1, 1};

    // cout << majorityElement(vec) << endl;
    // cout << majority_element(vec) << endl;
    cout << MajorityElement(vec) << endl;

    return 0;
}

// Brute Force Approach; Time Complexity = O(n^2);
int majorityElement(vector<int> vec) {
    int n = vec.size();

    for(int i : vec) {
        int freq = 0;
        for(int j : vec) {
            if(i == j) {
                freq++;
            }
        }
        if(freq > n/2) {
            return i;
        }
    }
}

// Optimised Approach; Time Complexity = O(nlogn);
int majority_element(vector<int> vec) {
    int freq = 1, ans = vec[0];
    int n = vec.size();

    sort(vec.begin(), vec.end()); // Sort Vector;

    for(int i=0; i<n; i++) {
        if(vec[i] == vec[i-1]) {
            freq++;
        } else {
            freq = 1;
            ans = vec[i];
        }
        if(freq > n/2) {
            return ans;
        }
    }
    return -1;
}

// Most Optimised Approach; Time Complexity = O(n);
// Moore's Voting Algorithm;
int MajorityElement(vector<int> vec) {
    int freq = 0, ans = 0;

    for(int i : vec) {
        if(freq == 0) {
            ans = i;
        }
        if(ans == i) {
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}