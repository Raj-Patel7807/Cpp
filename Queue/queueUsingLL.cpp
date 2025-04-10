#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Queue {
private:
    Node* head;
    Node* tail;

public:
    Queue() {
        head = nullptr;
        tail = nullptr;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        if(!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        } 
    }

    void pop() {
        if(!head) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* tmp = head;
        head = head->next;
        delete tmp;
    }

    int front() {
        if(!head) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head == nullptr;
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