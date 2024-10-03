#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>sandar(n);
    for(int i=0;i<n;i++){
        cin>>sandar[i];
    }
    sort(sandar.begin(),sandar.end());
    reverse(sandar.begin(),sandar.end());
    int sum=0;
    for(int element:sandar){
        sum+=element;
        cout<<sum<<" ";
    }
}