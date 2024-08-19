//Bismillah
#include <bits/stdc++.h>
using namespace std;
int main(){
    string first,second;
    cin>>first>>second;
        stack<char>s1,s2;
    for(int i=0;i<first.size();i++){
        if(first[i]!='#'){
            s1.push(first[i]);
        }
        else if(!s1.empty()){
            s1.pop();

        }
    }

        for(int i=0;i<second.size();i++){
        if(second[i]!='#'){
            s2.push(second[i]);
        }
        else if(!s2.empty()){
            s2.pop();

        }
    }
    bool check=true;
    while(!s1.empty()&&!s2.empty()){
        if(s1.top()!=s2.top()){
            check=false;
            break;
        }
        s1.pop();
        s2.pop();
    }

    if(s1.empty()&&s2.empty()&&check){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


  
}