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

void sums(Node* root, int level, vector<int>& levelsums, int& maxlevel) {
    if (root == nullptr) {
        return;
    }
    if (level >= levelsums.size()) {
        levelsums.push_back(0);
    }
    levelsums[level] += root->key;
    maxlevel = max(level, maxlevel);
    sums(root->left, level + 1, levelsums, maxlevel);
    sums(root->right, level + 1, levelsums, maxlevel);
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

    int maxlevel = 0;
    vector<int> levelsums;
    sums(root, 0, levelsums, maxlevel);

    cout << maxlevel + 1 << endl;  // Количество уровней
    for (int item : levelsums) {
        cout << item << " ";  // Сумма на каждом уровне
    }
    cout << endl;

    return 0;
}
