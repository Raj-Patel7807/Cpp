#include <bits/stdc++.h>
// #include <algorithm>
using namespace std;

int main() {

    vector<int> v = {3, 4, 2, 6, 1};

    cout << "v : ";
    for(auto i : v) cout << i << ' ';
    cout << endl;

    sort(v.begin(), v.end()); // For Sorting; // Intro. Sort;
    // Introspective Sort = QuickSort [O(logn)] + HeapSort [O(n^2)] + InsertionSort [O(n^2)]; 
    cout << "sorting..." << endl;

    cout << "v : ";
    for(int i : v) cout << i << ' ';
    cout << endl; 

    cout << "binary_search(5) = " << binary_search(v.begin(), v.end(), 5) << endl; // For Binary Search;

    cout << "lower_bound of 6 = " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl; // Lower Bound;
    cout << "upper_bound of 3 = " << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl << endl; // Upper Bound;

    int a = 3, b = 5;
    cout << "max of a = 3 and b = 5 : " << max(a, b) << endl; // Find Max;
    cout << "min of a = 3 and b = 5 : " << min(a, b) << endl << endl; // Find Min;

    cout << "a and b : " << a << ' ' << b << endl;
    swap(a, b); // For Swap;
    cout << "swap..." << endl;
    cout << "a and b : " << a << ' ' << b << endl << endl;

    string s = "abcdefg";
    cout << "s : " << s << endl;

    reverse(s.begin(), s.end()); // For Reverse;
    cout << "reverse..." << endl;
    cout << "s : " << s << endl << endl;

    cout << "v : ";
    for(int i : v) cout << i << ' ';
    cout << endl;

    rotate(v.begin(), v.begin()+2, v.end()); // For Rotate;
    cout << "rotate (v.begin(), v.begin()+2, v.end())..." << endl;
    cout << "v : ";
    for(int i : v) cout << i << ' ';
    cout << endl;

    // sort(a, a+n); // For Array Sorting;
    // sort(v.begin(), v.end()); // For Vector Sorting;
    // sort(a, a+n, greater<int>); // For Decreading Order Sorting;
    
    // sort(a, a+n, compBySs); // "a" is a Array, compByss is a function
    // sort it according to second element;
    
    // __builtin_popcount(); // it will count '1' bits in an integer;
    // __builtin_popcountll(); // it will count '1' bits in a long long int;

    // next_permutation(s.begin(), s.end()); // give all permutation of string s (from string s to last permutation);

    return 0;
}