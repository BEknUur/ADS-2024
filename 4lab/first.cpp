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

Node *insert(Node* san,int key){
    if(san==NULL){
        return new Node(key);
    }
    if(san->key==key){
        return san;
    }
    if(san->key<key){
     san->right= insert(san->right,key);
    }
    else{
        san->left=insert(san->left,key);
    }
    return san;
}
bool check(Node* root,const string& path){
    Node* current=root;
    for(char soz:path){
        if(current==NULL){
            return false;
        }
        if(soz=='L'){
            current=current->left;
        }
        else if(soz=='R'){
            current=current->right;
        }
    }
    return current!=NULL;
}
int main(){
    int n,m;
    cin>>n>>m;
    Node*root=NULL;
    for(int i=0;i<n;i++){
        int san;
        cin>>san;
        root=insert(root,san);
    }
    for(int i=0;i<m;i++){
        string path;
        cin>>path;
        if(check(root,path)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}






    
    

