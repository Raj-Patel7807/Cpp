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

void deleteAtBeginning(node*& head) {
    if(!head) {
        cout << "List is Already Empty.." << endl;
        return;
    }

    node* tmp = head;
    head = head->next;

    cout << "Element Deleted At the Beginning of the List.." << endl;

    delete tmp;
}

void deleteAtEnd(node*& head) {
    if(!head) {
        cout << "List is Already Empty.." << endl;
        return;
    }

    if(!head->next) {
        delete head;
        head = nullptr;
        cout << "Element Deleted At The end of the List.." << endl;
        return;
    }

    node* tmp = head;

    while(tmp->next->next) {
        tmp = tmp->next;
    }

    delete tmp->next;
    tmp->next = nullptr;

    cout << "Element Deleted At The end of the List.." << endl;
}

void deleteAtPosition(node*& head, int pos) {
    if(!head) {
        cout << "List is Already Empty.." << endl;
        return;
    }
    if(pos < 0) {
        cout << "Invalid Position To Delete Element.." << endl;
        return;
    }

    if(pos == 0) {
        deleteAtBeginning(head);
        return;
    }

    int cnt = 0;
    bool flag = false;
    node * tmp = head;

    while(tmp && tmp->next) {
        if(cnt == pos - 1) {
            node* toDelete = tmp->next;
            tmp->next = tmp->next->next;
            delete toDelete;
            flag = true;
            break;
        }

        tmp = tmp->next;
        cnt++;
    }

    if(!flag) {
        cout << "Invalid Position To Delete Element.." << endl;
        return; 
    }

    cout << "Element Deleted from the List.." << endl;
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

    deleteAtBeginning(head);
    printList(head);
    deleteAtEnd(head);
    printList(head);
    deleteAtPosition(head, 4);
    printList(head);

    deleteList(head);

    return 0;
}