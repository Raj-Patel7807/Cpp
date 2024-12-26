#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target);
vector<int> pair_sum(vector<int> nums, int target);

int main() {

    vector<int> nums = {2, 7, 11, 15}; // Already Sorted Array;
    int target = 9;

    // vector<int> ans = pairSum(nums, target);
    vector<int> ans = pair_sum(nums, target);

    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}

// Brute Force Approach; Time Complexity = O(n^2);
vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

// Optimised Approach; Two Pointer Approach;
vector<int> pair_sum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n-1; 

    while(i < j) {
        if(nums[i] + nums[j] < target) {
            i++;
        } else if(nums[i] + nums[j] > target) {
            j--;;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}