#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int san;
        cin >> san;
        map<char, int> mp;
        deque<char> sozder;
        
        for(int i = 0; i < san; i++){
            char c;
            cin >> c;
            mp[c]++;
            sozder.push_back(c);
            while(!sozder.empty() && mp[sozder.front()] > 1){
                sozder.pop_front();
            }
            if(!sozder.empty()){
                cout << sozder.front() << " ";
            }
            else{
                cout << "-1 ";
            }
        }
        cout << endl; 
    }
    return 0;
}
