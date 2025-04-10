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

class CircularList {
private:
    Node* head;
    Node* tail;

public:
    CircularList() {
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
            head = newNode;
        }
        tail->next = head;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if(!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        tail->next = head;
    }

    void insert(int val, int pos) {
        if(pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }

        if(pos == 0) {
            push_front(val);
            return;
        }

        Node* tmp = head;
        for(int i = 0; i < pos - 1; i++) {
            if(tmp->next == head) {
                cout << "Position out of bounds" << endl;
                return;
            }
            tmp = tmp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = tmp->next;
        tmp->next = newNode;
        if(tmp == tail) {
            tail = newNode;
        }
        tail->next = head;
    }

    void pop_front() {
        if(!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        if(head == tail) {
            head = nullptr;
            tail = nullptr;
        } else {
            head = head->next;
            tail->next = head;
        }

        delete temp;
    }

    void pop_back() {
        if(!head) {
            cout << "List is empty" << endl;
            return;
        }

        if(head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
            return;
        }

        Node* tmp = head;
        while(tmp->next != tail) {
            tmp = tmp->next;
        }

        delete tail;

        tail = tmp;
        tail->next = head;
    }

    void erase(int pos) {
        if(pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }

        if(pos == 0) {
            pop_front();
            return;
        }

        Node* tmp = head;
        for(int i = 0; i < pos - 1; i++) {
            if(tmp->next == head) {
                cout << "Position out of bounds" << endl;
                return;
            }
            tmp = tmp->next;
        }

        Node* toDelete = tmp->next;
        if(toDelete == tail) {
            tail = tmp;
        }
        tmp->next = toDelete->next;

        delete toDelete;
    }

    void reverse() {
        Node* prev = tail;
        Node* cur = head;
        Node* next = nullptr;

        while(true) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            if(cur == head) {
                break;
            }
        }

        Node* tmp = head;
        head = tail;
        tail = tmp;
        tail->next = head;
    }

    void printLL() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head -> next;
        cout << "Head -> " << head -> data << " -> ";
        while(temp != head) {
            cout << temp -> data << " -> ";
            temp = temp->next;
        }
        cout << "Head" << endl;
    }
};

int main() {

    CircularList cll;
    
    cll.push_front(1);
    cll.push_front(2);
    cll.push_front(3);
    cll.printLL();

    cll.push_back(4);
    cll.push_back(5);
    cll.push_back(6);
    cll.printLL();

    cll.insert(7, 2);
    cll.insert(8, 1);
    cll.printLL();

    cll.pop_front();
    cll.printLL();

    cll.pop_back();
    cll.printLL();

    cll.erase(2);
    cll.printLL();

    cll.reverse();
    cll.printLL();

    return 0;
}
