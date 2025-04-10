#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    vector<int> stack;

public:

    void push(int val) {
        stack.push_back(val);
    }

    void pop() {
        if (stack.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        stack.pop_back();
    }

    int top() {
        return stack.back();
    }

    bool empty() {
        return stack.size() == 0;
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