//bismillah
#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int>first,second;


    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        first.push(a);
    }

    for(int i=0;i<5;i++){
        int b;
        cin>>b; 
        second.push(b);
    }
    int cnt=0;
    int Max=1000000;
    while(!first.empty()&&!second.empty()&&cnt<Max){
        int n=first.front();
        int k=second.front();
        first.pop();
        second.pop();

        if((n==0&&k==9)||(n>k&&!(n==9&&k==0))){
            first.push(n);
            first.push(k);
        }
        else{
            second.push(n);
            second.push(k);
        }
        cnt++;

    }
    if(cnt>=Max){
        cout<<"blin nichya";
    }
    else if(first.empty()){
        cout<<"Nursik"<<" "<<cnt;
    }
    else{
        cout<<"Boris"<<" "<<cnt;
    }
}