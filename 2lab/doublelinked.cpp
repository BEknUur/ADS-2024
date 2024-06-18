#include <bits/stdc++.h>
using namespace std;

int main(){
    list<string> library;
    string s;
    
    while(cin >> s){
        if (s == "add_front"){
            string b;
            cin >> b;
            library.push_front(b);
            cout << "ok" << endl;
        }
        else if (s == "add_back"){
            string b;
            cin >> b;
            library.push_back(b);
            cout << "ok" << endl;
        }
        else if (s == "erase_front"){
            if (!library.empty()) {
                cout << library.front() << endl;
                library.pop_front();
            } else {
                cout << "error" << endl;
            }
        }
        else if (s == "erase_back"){
            if (!library.empty()) {
                cout << library.back() << endl;
                library.pop_back();
            } else {
                cout << "error" << endl;
            }
        }
        else if (s == "front"){
            if (!library.empty()) {
                cout << library.front() << endl;
            } else {
                cout << "error" << endl;
            }
        }
        else if (s == "back"){
            if (!library.empty()) {
                cout << library.back() << endl;
            } else {
                cout << "error" << endl;
            }
        }
        else if (s == "clear"){
            library.clear();
            cout << "ok" << endl;
        }
        else if (s == "exit"){
            cout << "goodbye" << endl;
            return 0;
        }
    }
}
