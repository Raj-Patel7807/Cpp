#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    stack<int> s1, s2;

public:
    void push(int val) {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(val);

        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    } 

    void pop() {
        if(s1.empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        s1.pop();
    }

    int front() {
        if(s1.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};

int main() {

    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}