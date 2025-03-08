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

void reverseLevelOrderTraversal(node* root) {

    if(root == nullptr) {
        return;
    }

    queue<node*> q;
    stack<node*> s;

    q.push(root);
    q.push(nullptr);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == nullptr) {
            if (!q.empty()) {
                s.push(nullptr);
                q.push(nullptr);
            }
        } else { 
            s.push(temp);

            if(temp->right) {
                q.push(temp->right);
            }
            if(temp->left) {
                q.push(temp->left);
            }
        }
    }

    while(!s.empty()) {
        if(s.top() == nullptr) {
            cout << endl;
        } else {
            cout << s.top()->data << " ";
        }
        s.pop();
    }
}

void inOrderTraversal(node* root) {
    if(root == nullptr) {
        return;
    }

    // L N R;

    inOrderTraversal(root->left);

    cout << root->data << " ";

    inOrderTraversal(root->right);
}

void preOrderTraversal(node* root) {
    if(root == nullptr) {
        return;
    }

    // N L R;

    cout << root->data << " ";

    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node* root) {
    if(root == nullptr) {
        return;
    }

    // L R N;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);

    cout << root->data << " ";
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

    cout << "\nReverse Level Order Traversal : \n";
    reverseLevelOrderTraversal(root);

    cout << "\n\nIn Order Traversal : ";
    inOrderTraversal(root);

    cout << "\nPre Order Traversal : ";
    preOrderTraversal(root);

    cout << "\nPost Order Traversal : ";
    postOrderTraversal(root);

    deleteTree(root);
    cout << "\n\nTree Deleted Successfully\n" << endl;

    return 0;
}