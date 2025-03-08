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

void printList(node* head) {
    node* tmp = head;

    while(tmp) {
        cout << tmp->data << " -> ";
        tmp = tmp->next;
    }

    cout << "NULL" << endl;
}

node* searchList(node* head, int key) {
    node* tmp = head;

    while(tmp && tmp->data != key) {
        tmp = tmp->next;
    }

    return tmp;
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

    int key = 8;

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

    printList(head);

    if(searchList(head, key)) {
        cout << "Element Found.." << endl;
    } else {
        cout << "Element Not Found.." << endl;
    }

    deleteList(head);

    return 0;
}