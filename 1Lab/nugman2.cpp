//Bismillah
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>start(n);
    vector<int>result;
    for(int i=0;i<n;i++){
        cin>>start[i];
    }
    for(int i=1;i<n;i++){
        bool check=false;
        for(int j=i-1;j>=0;j--){
            if(start[i]>start[j]){
                result.push_back(start[j]);
                check=true;
                break;

            }
        }
        if(!check){
            result.push_back(-1);
        }

    }

    for(int elem:result){
        cout<<elem<<" ";
    }
    
    
    
    }