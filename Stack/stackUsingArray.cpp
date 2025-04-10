#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    int* arr;
    int TOP;
    int capacity;

public:
    Stack(int cap) {
        capacity = cap;
        arr = new int[capacity];
        TOP = -1;
    }

    void push(int val) {
        if(TOP == capacity - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++TOP] = val;
    }

    void pop() {
        if(TOP == -1) {
            cout << "Stack underflow" << endl;
            return;
        }
        TOP--;
    }

    int top() {
        if(TOP == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[TOP];
    }

    bool empty() {
        return TOP == -1;
    }
};

int main() {

    Stack s(3);

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