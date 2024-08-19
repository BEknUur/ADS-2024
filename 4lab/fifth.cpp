#include <bits/stdc++.h>
using namespace std;
struct Node {
    int left = -1; 
    int right = -1; 
};


void countNodesAtLevels(const vector<Node>& tree, int node, int level, vector<int>& levelCounts) {
    if (node == -1) {
        return;
    }
    

    if (level >= levelCounts.size()) {
        levelCounts.push_back(0);
    }
    levelCounts[level]++;

    
    countNodesAtLevels(tree, tree[node].left, level + 1, levelCounts);
    countNodesAtLevels(tree, tree[node].right, level + 1, levelCounts);
}

int main() {
    int n;
    cin >> n;

    vector<Node> tree(n + 1);

    
    for (int i = 0; i < n - 1; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        if (z == 0) {
            tree[x].left = y; 
        } else {
            tree[x].right = y; 
        }
    }

    vector<int> levelCounts;
    
  
    countNodesAtLevels(tree, 1, 0, levelCounts);

 
    int maxWidth = 0;
    for (int count : levelCounts) {
        maxWidth = max(maxWidth, count);
    }

    cout << maxWidth << endl;

    return 0;
}
