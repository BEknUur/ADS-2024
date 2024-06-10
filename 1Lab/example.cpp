//Bismillah
#include <bits/stdc++.h>
using namespace std;
deque<int>firstone(int a){
    deque<int>sandar;
    for(int i=a;i>=1;i--){
        sandar.push_front(i);
        for(int j=0;j<i;j++){
            int number=sandar.back();
            sandar.pop_back();
            sandar.push_front(number);
        }
    }
    return sandar;


}
int main(){
    int value;
    cin>>value;
    while(value!=0){
        int n;
        cin>>n;
        value--;
        deque<int>solved=firstone(n);
        for(auto elem:solved){
            cout<<elem<<" ";
        }   
        cout<<endl;
        
 }
    

}
 