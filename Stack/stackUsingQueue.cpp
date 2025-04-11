#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    queue<int> q1, q2;

public:
    void push(int val) {
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(val);

        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop() {
        if(q1.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        q1.pop();
    }

    int top() {
        if(q1.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {

    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}