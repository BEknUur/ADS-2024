//Bismillah
#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cin>>n;

 while(n!=0){
    int a;
    cin>>a;
    n--;
    deque<int>sandar;
    for(int i=a;i>=1;i--){
        sandar.push_front(i);
    
    for(int j=0;j<i;j++){
        int number=sandar.back();
        sandar.pop_back();
        sandar.push_front(number);
    }
 }
 
 for(auto elem:sandar){
    cout<<elem<<" ";

 }


}
}