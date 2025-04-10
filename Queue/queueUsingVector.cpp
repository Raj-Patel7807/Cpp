#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    vector<int> queue;

public:
    void push(int val) {
        queue.push_back(val);
    }

    void pop() {
        if (queue.empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        queue.erase(queue.begin());
    }

    int front() {
        if (queue.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return queue[0];
    }

    bool empty() {
        return queue.empty();
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