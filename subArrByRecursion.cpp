#include <bits/stdc++.h>
using namespace std;

void subarrays(vector<int>& arr, vector<int> output, int idx, vector<vector<int>>& ans) {
    if(idx >= arr.size()) {
        ans.push_back(output);
        return;
    }

    subarrays(arr, output, idx+1, ans);

    output.push_back(arr[idx]);
    subarrays(arr, output, idx+1, ans);
}

vector<vector<int>> subArr(vector<int>& arr) {
    vector<vector<int>> ans;
    vector<int> output;

    subarrays(arr, output, 0, ans);

    return ans;
}

int main() {

    vector<int> arr = {1, 2, 3};

    vector<vector<int>> subArrs = subArr(arr);

    for(auto ar : subArrs) {
        for(auto i : ar) {
            cout << i << ' ';
        }
        cout << endl;
    }

    return 0;
}