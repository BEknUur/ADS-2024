#include <bits/stdc++.h>
using namespace std;
vector<int>v;
 bool binary(int target){
    int l=0;
    int r=v.size()-1;
    while(l<=r){
       int mid=(l+r)/2;
        if(v[mid]==target){
            return true;
        }
        else if(v[mid]>target){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return false;
    
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    } 
    int san;
    cin>>san;
    if(binary(san)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}