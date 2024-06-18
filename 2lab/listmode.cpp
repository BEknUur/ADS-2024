#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int value;
    ListNode* next;
    ListNode(int x) : value(x), next(nullptr) {}
};

class LinkedList {
public:
    ListNode* head;

    LinkedList() : head(nullptr) {}

    void insert(int x) {
        if (!head) {
            head = new ListNode(x);
        } else {
            ListNode* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = new ListNode(x);
        }
    }

    void print() {
        ListNode* temp = head;
        while (temp) {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }
};

int main() {
    int n;
    cin >> n;
    LinkedList list;
    map<int, int> mp;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        list.insert(x);
        mp[x]++;
    }

    int maxCount = 0;
    for (const auto& elem : mp) {
        if (maxCount < elem.second) {
            maxCount = elem.second;
        }
    }

    vector<int> modes;
    for (const auto& entry : mp) {
        if (entry.second == maxCount) {
            modes.push_back(entry.first);
        }
    }

    sort(modes.begin(), modes.end(), greater<int>());

    for (int element : modes) {
        cout << element << " ";
    }

    return 0;
}




    /*
     int n;
     cin>>n;
     vector<int>sandar(n);
     map<int,int> mp;
     for(int i=0;i<n;i++){
        cin>>sandar[i];
        mp[sandar[i]]++;
        
     }
     int max=0;
     int current=0;
     vector<int>modes;
     for(const auto elem:mp){
        if(max<elem.second){
            max=elem.second;
            
        }
        
     }
     for(const auto entry:mp){
        if(entry.second==max){
            modes.push_back(entry.first);
        }
     }
     sort(modes.begin(),modes.end());
     reverse(modes.begin(),modes.end());
     for(int element:modes){
        cout<<element<<" ";
     }
}
*/