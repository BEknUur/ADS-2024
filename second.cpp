#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int item) {
        key = item;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }
    if (key < root->key) {
        root->left = insert(root->left, key);
    } else {
        root->right = insert(root->right, key);
    }
    return root;
}

Node* search(Node* root, int key) {
    if (root == nullptr || root->key == key) {
        return root;
    }
    if (key < root->key) {
        return search(root->left, key);
    }
    return search(root->right, key);
}

int count(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

int main() {
    int n;
    cin >> n;
    Node* root = nullptr;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        root = insert(root, a);
    }

    int b;
    cin >> b;
    Node* bNode = search(root, b);
    if (bNode != nullptr) {
        int sub = count(bNode);
        cout << sub << endl;
    } 

    return 0;
}
