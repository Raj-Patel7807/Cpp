#include <bits/stdc++.h>
// #include <queue>
using namespace std;

// First In, First Out Concept; // FIFO concept;
int main() {

    queue<int> q;

    cout << "size = " << q.size() << endl;

    q.push(1);
    q.push(2);
    q.emplace(3); // emplace works;
    cout << "push(1, 2 and 3)..." << endl;
    cout << "size = " << q.size() << endl;

    cout << "First(Front) Ele. = " << q.front() << endl;
    q.pop();
    cout << "pop()..." << endl;
    cout << "size = " << q.size() << endl;
    cout << "First(Front) Ele. = " << q.front() << endl;
    
    // size, swap, empty same as stack;

    return 0;
}