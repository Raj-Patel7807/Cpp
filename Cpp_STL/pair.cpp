#include <bits/stdc++.h>
using namespace std;

int main() {

    pair<int, int> p = {1, 3};

    cout << p.first << ' ' << p.second << endl; // 1 3

    pair<int, pair<int, int>> pp = {1, {3, 5}};

    cout << pp.first << ' ' << pp.second.first << ' ' << pp.second.second << endl; // 1 3 5

    pair<int, int> arr[] = { {1, 3}, {2, 4}, {5, 7} };

    cout << arr[1].second << endl; // 4

    return 0;
}