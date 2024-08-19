#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node*left;
    Node* right;
    Node(int item){
        key=item;
        left=right=nullptr;
    }
};
Node *insert(Node*root,int key){
    if(root==nullptr){
        return new Node(key);
    }
    if(key< root->key){
        root->left=insert(root->left,key);
    }
    else{
        root->right=insert(root->right,key);
    }
    return root;
    
}
Node *search(Node* root,int key){
    if(root==nullptr|| root->key==key){
        return root;
    }
    if(key<root->key){
        return search(root->left,key);
    }
    else{
        return search (root->right,key);
    }

    
}
void beka(Node *root){
    if(root!=nullptr){
        cout<<root->key<<" ";
        beka(root->left);
        beka(root->right);
    }
}
int main(){
    int n;
    cin>>n;
    Node*root=nullptr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        root=insert(root,a);

    }
    int b;
    cin>>b;
    Node *bNode=search(root,b);
   beka(bNode);
   

}