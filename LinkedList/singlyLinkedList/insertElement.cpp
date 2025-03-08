#include <bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* next;

        node(int data) {
            this->data = data;
            this->next = nullptr; 
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

void insertAtBeginning(node*& head, int data) {
    node* newNode = new node(data);

    newNode->next = head;
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
    while(tmp) {
        if(cnt == pos - 1) {
            flag = true;
            break;
        }
        tmp = tmp->next;
        cnt++;
    }

    if(!flag) {
        cout << "Invalid Position For Insert Element.." << endl;
    } else {
        newNode->next = tmp->next;
        tmp->next = newNode;
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

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    printList(head);

    insertAtBeginning(head, 8);
    printList(head);
    insertAtEnd(head, 10);
    printList(head);
    insertAtPosition(head, 12, 5);
    printList(head);

    deleteList(head);

    return 0;
}