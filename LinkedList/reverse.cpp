#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;

    node(int data) {
        this->data = data;
        next = nullptr; 
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

void reverseList(node*& head) {
    node* prev = nullptr;
    node* tmp = head;

    while(tmp) {
        node* nextNode = tmp->next;
        tmp->next = prev;
        prev = tmp;
        tmp = nextNode;
    }

    head = prev;

    cout << "List Reversed.." << endl;
}

void deleteList(node*& head) {
    while (head) {
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

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    printList(head);

    reverseList(head);
    printList(head);

    deleteList(head);

    return 0;
}