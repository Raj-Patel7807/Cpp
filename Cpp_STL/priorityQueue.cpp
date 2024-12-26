#include <bits/stdc++.h>
// #include <queue>
using namespace std;

int main() {

    priority_queue<int> pq; // Max Heap;
    cout << "pq size = " << pq.size() << endl;
    
    priority_queue<int, vector<int>, greater<int>> pq1; // Min Heap;
    cout << "pq1 size = " << pq1.size() << endl;

    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(0); // emplace will also work;
    cout << "pq.push(1, 3, 2 and 0)..." << endl;
    cout << "pq size = " << pq.size() << endl;
    cout << "pq : ";
    int n = pq.size();
    for(int i=0; i<n; ++i) {
        cout << pq.top() << ' '; // Max Heap --> Always Output Max Ele.
        pq.pop();
    }
    cout << endl << endl;

    pq1.push(4);
    pq1.push(3);
    pq1.push(7);
    pq1.push(2);
    pq1.push(8); // emplace will also work;
    cout << "pq1.push(4, 3, 7, 2 and 8)..." << endl;
    cout << "pq1 size = " << pq1.size() << endl;
    cout << "pq1 : ";
    int m = pq1.size();
    for(int i=0; i<m; ++i) {
        cout << pq1.top() << ' '; // Min Heap --> Always Output Min Ele.
        pq1.pop();
    }
    cout << endl;

    cout << "pq1 isEmpty = " << pq1.empty() << endl;

    // size and swap same as stack or queue;

    return 0;
}