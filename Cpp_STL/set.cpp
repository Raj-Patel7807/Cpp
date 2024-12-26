#include <bits/stdc++.h>
// #include <set>
using namespace std;

int main() {

    set<int> s;

    s.insert(5); // O(logn)
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(1);
    s.insert(5);
    s.insert(3); // emplace will also work;
    cout << "insert(5, 3, 2, 4, 1, 5 and 3)..." << endl;

    cout << "size = " << s.size() << endl;
    cout << "s : ";
    for(int i : s) cout << i << ' ';
    cout << endl; 

    auto it = s.begin(); // set<int> :: iterator it = s.begin();
    it++;
    s.erase(it); // O(logn);
    cout << "s.erase(it)..." << endl;
    cout << "s : ";
    for(int i : s) cout << i << ' ';
    cout << endl;

    cout << "s.count(4) = " << s.count(4) << endl; // If Count is 0 then Ele. is not present; // O(logn);
    
    auto itr = s.find(4); // set<int> :: iterator itr = s.find(4); // O(logn);
    cout << "*itr = " << *itr << endl;

    // In Set Elements are Always in Sorted Order, But, In unordered_set, Order Doesn't Matter;

    // st.erase(5) // it will erase 5; O(logn);

    // st.erase(2, 4); // it will erase 2 and elements between 2 and 4;

    // st.lower_bound(4); // if 4 is present in set then it will return iterator of 4;
                       // if 4 is not present then it will return iterator of element which is immediate next greater than 4;

    // st.upper_bound(7); // it will always return iterator of element which is immediate next greater than 7;


    // unordered_set
    // lower_bound and upper_bound does not work, rest all functions are same;
    // it does not stores in any perticular order;
    // it has a better complexity than set in most cases;

    return 0;
}