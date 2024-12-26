#include <bits/stdc++.h>
// #include <list>
using namespace std;

int main() {

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    // pop_back() AND pop_front() also Work;

    cout << "l : ";
    for(int i : l) cout << i << ' ';
    cout << endl;

    l.erase(l.begin());
    cout << "erase(l.begin())..." << endl;
    for(int i : l) cout << i << ' ';
    cout << endl;

    cout << "size = " << l.size() << endl << endl;

    list<int> cp(l);
    // Copy l in cp;
    cout << "cp : ";
    for(int i : cp) cout << i << ' ';
    cout << endl;

    list<int> l1(5, 10);
    cout << "l1 : ";
    for(int i : l1) cout << i << ' ';
    cout << endl;

    // emplace_back and emplace_front functions will also work;
    // rest Functions same as Vector
    // begin(), end(), clear(), insert(), size(), swap().....;
    
    return 0;
}