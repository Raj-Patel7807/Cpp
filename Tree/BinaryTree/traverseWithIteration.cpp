#include <bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

        node(int data) {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
};

node* buildTree(node* root) {
    cout << "Enter The Data : ";
    int data;
    cin >> data;

    if(data == -1) {
        return nullptr;
    }

    root = new node(data);
    
    cout << "For The Left Child of " << data << endl;
    root->left = buildTree(root->left);

    cout << "For The Right Child of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void inOrderTraversal(node* root) {
    stack<node*> s;
    node* tmp = root;

    // L N R;

    while (tmp != nullptr || !s.empty()) {
        while (tmp != nullptr) {
            s.push(tmp);
            tmp = tmp->left;
        }

        tmp = s.top();
        s.pop();

        cout << tmp->data << " ";

        tmp = tmp->right;
    }
}


void preOrderTraversal(node* root) {
    if (root == nullptr) return;

    stack<node*> s;
    s.push(root);

    while (!s.empty()) {
        node* tmp = s.top();
        s.pop();

        // N L R;

        cout << tmp->data << " ";

        if (tmp->right) s.push(tmp->right);
        if (tmp->left) s.push(tmp->left);
    }
}


void postOrderTraversal(node* root) {
    if (root == nullptr) return;

    stack<node*> s1, s2;
    s1.push(root);

    // L R N;

    while (!s1.empty()) {
        node* tmp = s1.top();
        s1.pop();
        s2.push(tmp);

        if (tmp->left) s1.push(tmp->left);
        if (tmp->right) s1.push(tmp->right);
    }

    while (!s2.empty()) {
        cout << s2.top()->data << " ";
        s2.pop();
    }
}

void deleteTree(node* root) {
    if(root == nullptr) {
        return;
    }

    deleteTree(root->left);
    deleteTree(root->right);

    delete root;
}

int main() {

    node* root = nullptr;

    root = buildTree(root);
    cout << "\nTree Built Successfully" << endl;

    cout << "\nIn Order Traversal : ";
    inOrderTraversal(root);

    cout << "\nPre Order Traversal : ";
    preOrderTraversal(root);

    cout << "\nPost Order Traversal : ";
    postOrderTraversal(root);

    deleteTree(root);
    cout << "\n\nTree Deleted Successfully\n" << endl;

    return 0;
}
