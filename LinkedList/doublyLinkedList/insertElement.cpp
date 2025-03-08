#include <bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* next;
        node* prev;

        node(int data) {
            this->data = data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

void printListForward(node* head) {
    node* tmp = head;

    while(tmp) {
        cout << tmp->data << " -> ";
        tmp = tmp->next;
    }

    cout << "NULL" << endl;
}

void printListBackward(node* head) {
    node* tmp = head;

    while(tmp->next) {
        tmp = tmp->next;
    }

    while(tmp) {
        cout << tmp->data << " -> ";
        tmp = tmp->prev;
    }

    cout << "NULL" << endl;
}

void insertAtBeginning(node*& head, int data) {
    node* newNode = new node(data);

    if(!head) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    cout << "Element Inserted At the Beginning of the List.." << endl;
}

void insertAtEnd(node*& head, int data) {
    node* newNode = new node(data);
    node* tmp = head;

    if(!tmp) {
        head = newNode;
        return;
    }

    while(tmp->next) {
        tmp = tmp->next;
    }

    tmp->next = newNode;
    newNode->prev = tmp;

    cout << "Element Inserted At the end of the List.." << endl;
}

void insertAtPosition(node*& head, int data, int pos) {
    node* newNode = new node(data);

    if(pos < 0) {
        cout << "Invalid Position For Insert Element.." << endl;
        return;
    }
    if(pos == 0) {
        insertAtBeginning(head, data);
        return;
    }

    int cnt = 0;
    bool flag = false;
    node* tmp = head;

    while(tmp && tmp->next) {
        if(cnt == pos - 1) {
            newNode->next = tmp->next;
            tmp->next->prev = newNode;
            tmp->next = newNode;
            newNode->prev = tmp;
            flag = true;
            break;
        }
        tmp = tmp->next;
        cnt++;
    }

    if(!flag) {
        cout << "Invalid Position For Insert Element.." << endl;
    }

    cout << "Element Inserted in the List.." << endl;
}

void deleteList(node*& head) {
    while(head) {
        node* tmp = head;
        head = head->next;
        delete tmp;
    }

    cout << "List Deleted.." << endl;
}

int main() {

    node* head = new node(0);

    node* first = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);
    node* fifth = new node(5);
    node* sixth = new node(6);
    node* seventh = new node(7);

    head->next = first; first->prev = head;
    first->next = second; second->prev = first;
    second->next = third; third->prev = second;
    third->next = fourth; fourth->prev = third;
    fourth->next = fifth; fifth->prev = fourth;
    fifth->next = sixth; sixth->prev = fifth;
    sixth->next = seventh; seventh->prev = sixth;

    printListForward(head);

    insertAtBeginning(head, 8);
    printListForward(head);

    insertAtEnd(head, 10);
    printListForward(head);

    insertAtPosition(head, 12, 5);
    printListForward(head);

    deleteList(head);

    return 0;
}
