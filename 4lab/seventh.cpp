#include <bits/stdc++.h>
using namespace std;
struct Node{
int key;
Node* left;
Node* right;
Node(int item){
    key=item;
    left=right=nullptr;
}
};
Node* insert(Node* root,int key){
    if(root==nullptr){
        return new Node(key);
    }
    if(key<root->key){
        root->left=insert(root->left,key);
    }
    else{
        root->right=insert(root->right,key);
    }
    return root;
}
int diameters(Node* root,int&diameter){
    if(root==nullptr){
        return 0;

    }
    int leftdepth=diameters(root->left,diameter);
    int rightdepth=diameters(root->right,diameter);
    diameter=max(diameter,leftdepth+rightdepth);
    return max(leftdepth,rightdepth)+1;
}

int main(){
    int n;
    cin>>n;
    Node* root=nullptr;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        root=insert(root,value);
    }
    int diameter=0;
    diameters(root,diameter);
    cout<<diameter+1;

}