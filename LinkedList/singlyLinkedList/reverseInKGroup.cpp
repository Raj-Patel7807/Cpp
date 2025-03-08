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

node* reverseListKGroup(node*& head, int k) {
    if(head == nullptr) {
        return head;
    }

    node* prev = nullptr;
    node* curr = head;
    node* nextNode = nullptr;

    int count = 0;

    while(curr != nullptr && count < k) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
        count++;
    }

    if(nextNode != nullptr) {
        head->next = reverseListKGroup(nextNode, k);
    }

    return prev;
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

    printList(reverseListKGroup(head, 3));

    deleteList(head);

    return 0;
}
