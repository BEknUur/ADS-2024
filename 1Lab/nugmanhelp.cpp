//Bismillah
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   vector<int>jastar(n);
   stack<int>start;
   vector<int>result(n);
   for(int i=0;i<n;i++){
 cin>>jastar[i];
   }
for(int i=0;i<n;i++){
    while(!start.empty()&&jastar[start.top()]>=jastar[i]){
        start.pop();
    }
    if(start.empty()){
       result[i]=-1;
    }
    else{
        result[i]=jastar[start.top()];
    }
    start.push(i);

}


for(int elem:result){
    cout<<elem<<" ";
}

    
}