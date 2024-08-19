//Bismillah
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
     stack<char>balance;
     for(char arip:s){
        if(!balance.empty()&&balance.top()==arip){
            balance.pop();
        }
        else{
            balance.push(arip);
        }
     }
     if(!balance.empty()){
        cout<<"NO";
     }
     else{
        cout<<"YES";
     }
}