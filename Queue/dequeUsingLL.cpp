#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class Deque {
private:
    Node* head;
    Node* tail;

public:
    Deque() {
        head = nullptr;
        tail = nullptr;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if(!head) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(!tail) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front() {
        if(!head) {
            cout << "Deque is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        if(head) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }

        delete temp;
    }

    void pop_back() {
        if(!tail) {
            cout << "Deque is empty" << endl;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if(tail) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }

        delete temp;
    }

    int front() {
        if(!head) {
            cout << "Deque is empty" << endl;
            return -1;
        }
        return head->data;
    }

    int back() {
        if(!tail) {
            cout << "Deque is empty" << endl;
            return -1;
        }
        return tail->data;
    }

    bool isEmpty() {
        return head == nullptr;
    }
};

int main() {

    Deque dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(0);
    dq.push_front(-1);

    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    dq.pop_back();
    cout << "Back: " << dq.back() << endl;

    dq.pop_front();
    cout << "Front: " << dq.front() << endl;

    return 0;
}