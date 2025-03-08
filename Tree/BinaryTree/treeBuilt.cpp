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

    deleteTree(root);
    cout << "\nTree Deleted Successfully\n" << endl;

    return 0;
}
