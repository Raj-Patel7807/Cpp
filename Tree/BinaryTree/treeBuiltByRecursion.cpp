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
    
    cout << "For The Left Child of " << data << " ";
    root->left = buildTree(root->left);

    cout << "For The Right Child of " << data << " ";
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
