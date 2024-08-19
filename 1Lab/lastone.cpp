//bismillah
#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>zhanymsol;
    char zhansaya;
    while(cin>>zhansaya){
        if(zhansaya=='+'){
            int san;
            cin>>san;
            zhanymsol.push_front(san);
        }
        if(zhansaya=='-'){
            int san;
            cin>>san;
            zhanymsol.push_back(san);
        }
        if(zhansaya=='*'){
           if(zhanymsol.empty()){
            cout<<"error"<<endl;
           }
           else {
            int sum=zhanymsol.front()+zhanymsol.back();
            cout<<sum<<endl;
            zhanymsol.pop_front();
            zhanymsol.pop_back();
           }
        }
        if(zhansaya=='!'){
            break;
        }
    }
    
}