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

class Stack {
private:
    Node* head;
    Node* tail;

public:
    Stack() {
        head = nullptr;
        tail = nullptr;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        if(!head) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop() {
        if(!head) {
            cout << "Stack is empty" << endl;
            return;
        }

        if(head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
        } else {
            Node* tmp = head->next;
            delete head;
            head = tmp;
        }
    }

    int top() {
        if(!head) {
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head == nullptr;
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