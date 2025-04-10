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

class DoublyList {
private:
    Node* head;
    Node* tail;

public:
    DoublyList() {
        head = nullptr;
        tail = nullptr;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
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
        if (tail == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
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

        Node* temp = head;
        for(int i = 0; i < pos - 1; i++) {
            if(!temp) {
                cout << "Position out of bounds" << endl;
                return;
            }
            temp = temp->next;
        }

        if(!temp) {
            cout << "Position out of bounds" << endl;
            return;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        newNode->prev = temp;

        if(temp->next) {
            temp->next->prev = newNode;
        } else {
            tail = newNode;
        }

        temp->next = newNode;
    }

    void pop_front() {
        if(!head) {
            cout << "List is empty" << endl;
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
            cout << "List is empty" << endl;
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

    void erase(int pos) {
        if(pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }

        if(pos == 0) {
            pop_front();
            return;
        }

        Node* temp = head;
        for(int i = 0; i < pos-1; i++) {
            if(!temp) {
                cout << "Position out of bounds" << endl;
                return;
            }
            temp = temp->next;
        }

        if(!temp || !temp->next) {
            cout << "Position out of bounds" << endl;
            return;
        }

        Node* toDelete = temp->next;
        temp->next = toDelete->next;

        if(toDelete->next) {
            toDelete->next->prev = temp;
        } else {
            tail = temp;
        }

        delete toDelete;
    }

    void reverse() {
        Node* prev = nullptr;
        Node* cur = head;
        Node* next = nullptr;

        tail = head;

        while(cur) {
            next = cur -> next;
            cur->next = prev;
            cur->prev = next;
            prev = cur;
            cur = next;
        }

        head = prev;
    }

    void printLL() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        
        Node* temp = head;
        cout << "NULL(Head) <=> ";
        while (temp != nullptr) {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {

    DoublyList dll;

    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.printLL();

    dll.push_back(4);
    dll.push_back(5);
    dll.push_back(6);
    dll.printLL();

    dll.insert(7, 3);
    dll.insert(8, 0);
    dll.printLL();

    dll.pop_front();
    dll.printLL();

    dll.pop_back();
    dll.printLL();

    dll.erase(2);
    dll.printLL();

    dll.reverse();
    dll.printLL();

    return 0;
}
