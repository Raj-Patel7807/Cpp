#include <bits/stdc++.h>
using namespace std;

void combs(string& digits, string output, int idx, string mapping[], vector<string>& ans) {
    if(idx >= digits.size()) {
        ans.push_back(output);
        return;
    }

    string value = mapping[digits[idx] - '0'];

    for(int i=0; i<value.size(); i++) {
        output.push_back(value[i]);
        combs(digits, output, idx+1, mapping, ans);
        output.pop_back();
    }
}

vector<string> phoneKeypad(string& digits) {
    vector<string> ans;
    string output = "";

    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    combs(digits, output, 0, mapping, ans);

    return ans;
}

int main() {

    string digits;
    cin >> digits;

    vector<string> strCombs = phoneKeypad(digits);

    for(auto strs : strCombs) {
        cout << strs << ' ';
    }

    return 0;
}