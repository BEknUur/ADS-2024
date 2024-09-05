#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int item){
        key=item;
        left=right=NULL;
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
int count(Node* root){
    if(root==nullptr){
        return 0;
    }
    int lefttry=count(root->left);
    int righttry=count(root->right);
    int current=(root->left!=nullptr&&root->right!=nullptr) ? 1:0;
    return lefttry+righttry+current;
}
int main(){
    int n;
    cin>>n;
    Node* root=nullptr;
    for(int i=0;i<n;i++){
        int value ;
        cin>>value;
        root=insert(root,value);
    }
    int result=count(root);
    cout<<result<<'\n';


}