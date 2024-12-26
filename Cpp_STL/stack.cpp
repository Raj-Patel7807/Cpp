#include <bits/stdc++.h>
// #include <stack>
using namespace std;

// Last In, First Out Concept; // LIFO concept;
int main() {

    stack<int> s;
    cout << "size = " << s.size() << endl;
    s.push(1); // O(logn);
    s.push(2);
    s.emplace(3); // emplace works;
    cout << "push(1, 2 and 3)..." << endl;
    cout << "size = " << s.size() << endl;
    cout << "top Ele. = " << s.top() << endl; // O(1);

    s.pop(); // O(logn);
    cout << "pop()..." << endl;
    cout << "size = " << s.size() << endl;
    cout << "top Ele. = " << s.top() << endl;

    cout << "isEmpty = " << s.empty() << endl;

    // Swap will also wrok;
    
    return 0;
}