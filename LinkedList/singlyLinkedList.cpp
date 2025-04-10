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

class SinglyList {
private:
    Node* head;
    Node* tail;

public:
    SinglyList() {
        head = nullptr;
        tail = nullptr;
    }

    void push_front(int data) {
        Node* newNode = new Node(data);
        if(!head) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int data) {
        Node* newNode = new Node(data);
        if(!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insert(int data, int pos) {
        if(pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }

        if(pos == 0) {
            push_front(data);
            return;
        }

        Node* tmp = head;
        for(int i=0; i<pos-1; i++) {
            if(!tmp) {
                cout << "Position out of bounds" << endl;
                return;
            }
            tmp = tmp->next;
        }

        if(!tmp) {
            cout << "Position out of bounds" << endl;
            return;
        }

        Node* newNode = new Node(data);
        newNode->next = tmp->next;
        tmp->next = newNode;
    }

    void pop_front() {
        if(!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* tmp = head;
        head = head->next;
        delete tmp;

        if(!head) tail = nullptr;
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

        tmp->next = nullptr;
        delete tail;
        tail = tmp;
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
        for(int i=0; i<pos-1; i++) {
            if(!tmp) {
                cout << "Position out of bounds" << endl;
                return;
            }
            tmp = tmp->next;
        }
        
        if(!tmp || !tmp->next) {
            cout << "Position out of bounds" << endl;
            return;
        }
        
        Node* toDelete = tmp->next;
        tmp->next = tmp->next->next;
        delete toDelete;
    }

    void reverse() {
        Node* perv = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        tail = head;

        while(curr) {
            next = curr->next;
            curr->next = perv;
            perv = curr;
            curr = next;
        }

        head = perv;
    }

    int search(int key) {
        Node* tmp = head;
        int idx = 0;

        while(tmp) {
            if(tmp->data == key) {
                return idx;
            }
            tmp = tmp->next;
            idx++;
        }
        return -1;
    }

    void printLL() {
        Node* tmp = head;
        while(tmp) {
            cout << tmp -> data << " -> ";
            tmp = tmp -> next;
        } cout << "NULL" << endl;
    }
};

int main() {

    SinglyList sll;

    sll.push_front(1);
    sll.push_front(2);
    sll.push_front(3);
    sll.printLL();

    sll.push_back(4);
    sll.push_back(5);
    sll.push_back(7);
    sll.printLL();

    sll.pop_front();
    sll.printLL();

    sll.pop_back();
    sll.printLL();

    sll.insert(6, 2);
    sll.printLL();

    sll.erase(1);
    sll.printLL();

    sll.reverse();
    sll.printLL();

    cout << "Search 6 : " << sll.search(6) << endl;
    cout << "Search 10 : " << sll.search(10) << endl;

    return 0;
}
