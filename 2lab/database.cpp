#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>soz(n);
    for(int i=0;i<n;i++){
        cin>>soz[i];
    }
    string a=" ";
    vector<string>newset;
    for(string elem:soz){
        if(elem!=a){
            newset.push_back(elem);
            a=elem;

        }
    }
    sort(newset.begin(),newset.end());
    cout<<"All in all: "<<newset.size()<<endl;
    cout<<"Students:"<<endl;
    for(string element:newset){
        cout<<element<<endl;
    }

}






