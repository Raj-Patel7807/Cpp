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
    if (head == NULL) {
        return;
    }

    node* temp = head;

    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)" << endl;
}

void deleteList(node*& head) {
    if (!head) return;

    node* curr = head;
    node* nextNode;

    do {
        nextNode = curr->next;
        delete curr;
        curr = nextNode;
    } while (curr != head);

    head = nullptr;
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
    seventh->next = head;

    printList(head);

    deleteList(head);

    return 0;
}