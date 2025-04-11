#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
private:
    int* arr;
    int curSize, cap;
    int frt, rear;

public:
    CircularQueue(int size) {
        cap = size;
        arr = new int[cap];
        curSize = 0;
        frt = 0;
        rear = -1;
    }

    void push(int val) {
        if (curSize == cap) {
            cout << "Queue is full" << endl;
            return;
        }
        rear = (rear + 1) % cap;
        arr[rear] = val;
        curSize++;
    }

    void pop() {
        if (curSize == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        frt = (frt + 1) % cap;
        curSize--;
    }

    int front() {
        if (curSize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[frt];
    }

    bool empty() {
        return curSize == 0;
    }
};

int main() {

    CircularQueue q(5);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}