//bismillah
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string students;
    cin >> students;
    queue<int> S, K;
    for (int i = 0; i < n; i++) {
        if (students[i] == 'S') {
            S.push(i);
        } else {
            K.push(i);
        }
    }
    while (!S.empty() && !K.empty()) {
        int s = S.front();
        int k = K.front();
        S.pop();
        K.pop();
        if (s < k) {
            S.push(s + n);
        } else {
            K.push(k + n);
        }
    }
    if (S.empty()) {
        cout << "KATSURAGI" ;
    } else {
        cout << "SAKAYANAGI" ;
    }

}
