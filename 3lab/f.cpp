#include <bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>sandar(n);
    for(int i=0;i<n;i++){
        cin>>sandar[i];
    }
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
        int sum=0;
        int index=0;
        for(int j=0;j<sandar.size();j++){
            if(arr[i]>=sandar[j]){
                index++;
                sum+=sandar[j];
            }
        }
        cout<<index<<" "<<sum<<"\n";
    }
    

   
    
}