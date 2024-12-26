#include <bits/stdc++.h>
// #include <deque>
using namespace std;

int main() {

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout << "d : ";
    for(auto i : d) cout << i << ' ';
    cout << endl;

    cout << "pop_back..." << endl;
    d.pop_back();
    for(auto i : d) cout << i << ' ';
    cout << endl;

    d.push_back(1);
    cout << "push_back(1)..." << endl;
    d.pop_front();
    cout << "pop_front..." << endl;
    for(auto i : d) cout << i << ' ';
    cout << endl;

    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    cout << "push_back(2, 3 and 4)..." << endl;

    cout << "1st index Ele. = " << d.at(1) << endl;
    cout << "First(Front) Ele. = " << d.front() << endl;
    cout << "Last(Back) Ele. = " << d.back() << endl;

    cout << "isEmpty = " << d.empty() << endl << endl;

    cout << "d : ";
    for(int i : d) cout << i << ' ';
    cout << endl;
    d.erase(d.begin(), d.begin()+1); // O(n);
    cout << "erase(d.begin(), d.begin()+1)..." << endl;
    for(int i : d) cout << i << ' ';
    cout << endl << endl;

    // emplace_back and emplace_front will also work;
    // rest functions same as vector;
    
    return 0;
}