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
    queue<node*> q;

    cout << "Enter The Data For Root : ";
    int data;
    cin >> data;

    root = new node(data);
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter The Left Child of " << temp->data << " : ";
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter The Right Child of " << temp->data << " : ";
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }

    return root;
}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == nullptr) {
            cout << endl;

            if(!q.empty()) {
                q.push(nullptr);
            }
        } else { 
            cout << temp->data << " ";

            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
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

    cout << "\nLevel Order Traversal : \n";
    levelOrderTraversal(root);

    deleteTree(root);
    cout << "\nTree Deleted Successfully\n" << endl;

    return 0;
}
