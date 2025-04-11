#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preOrderByRecursion(Node* root) { // Root Left Right;
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";
    preOrderByRecursion(root->left);
    preOrderByRecursion(root->right);
}

void inOrderByRecursion(Node* root) { // Left Root Right;
    if (root == nullptr) {
        return;
    }

    inOrderByRecursion(root->left);
    cout << root->data << " ";
    inOrderByRecursion(root->right);
}

void postOrderByRecursion(Node* root) { // Left Right Root;
    if (root == nullptr) {
        return;
    }

    postOrderByRecursion(root->left);
    postOrderByRecursion(root->right);
    cout << root->data << " ";
}

void levelOrderByIteration(Node* root) { // Level by level traversal;
    if (root == nullptr) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left != nullptr) {
            q.push(current->left);
        }
        if (current->right != nullptr) {
            q.push(current->right);
        }
    }
}

void preOrderByIteration(Node* root) { // Root Left Right;
    if (root == nullptr) {
        return;
    }

    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* current = s.top();
        s.pop();

        cout << current->data << " ";

        if (current->right != nullptr) {
            s.push(current->right);
        }
        if (current->left != nullptr) {
            s.push(current->left);
        }
    }
}

void inOrderByIteration(Node* root) { // Left Root Right;
    if (root == nullptr) {
        return;
    }

    stack<Node*> s;
    Node* current = root;

    while (current != nullptr || !s.empty()) {
        while (current != nullptr) {
            s.push(current);
            current = current->left;
        }

        current = s.top();
        s.pop();

        cout << current->data << " ";
        current = current->right;
    }
}

void postOrderByIteration(Node* root) { // Left Right Root;
    if (root == nullptr) {
        return;
    }

    stack<Node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        Node* current = s1.top();
        s1.pop();
        s2.push(current);

        if (current->left != nullptr) {
            s1.push(current->left);
        }
        if (current->right != nullptr) {
            s1.push(current->right);
        }
    }

    while (!s2.empty()) {
        cout << s2.top()->data << " ";
        s2.pop();
    }
}

Node* buildTree(vector<int>& tree, int& idx) { // Build tree from pre order traversal;
    idx++;
    if (idx >= tree.size() || tree[idx] == -1) {
        return nullptr;
    }

    Node* root = new Node(tree[idx]);

    root->left = buildTree(tree, idx);
    root->right = buildTree(tree, idx);

    return root;
}

void clearTree(Node* root) { // Clear the tree and free memory;
    if (root == nullptr) {
        return;
    }

    clearTree(root->left);
    clearTree(root->right);
    delete root;
}

int main() {

    vector<int> tree = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    int idx = -1;
    Node* root = buildTree(tree, idx);
    cout << "Tree built." << endl;

    cout << "Pre-order Traversal (Recursion): ";
    preOrderByRecursion(root);
    cout << endl;

    cout << "In-order Traversal (Recursion): ";
    inOrderByRecursion(root);
    cout << endl;

    cout << "Post-order Traversal (Recursion): ";
    postOrderByRecursion(root);
    cout << endl;

    cout << "Level-order Traversal (Iteration): ";
    levelOrderByIteration(root);
    cout << endl;

    cout << "Pre-order Traversal (Iteration): ";
    preOrderByIteration(root);
    cout << endl;

    cout << "In-order Traversal (Iteration): ";
    inOrderByIteration(root);
    cout << endl;

    cout << "Post-order Traversal (Iteration): ";
    postOrderByIteration(root);
    cout << endl;

    clearTree(root);
    cout << "Tree cleared." << endl;

    return 0;
}
