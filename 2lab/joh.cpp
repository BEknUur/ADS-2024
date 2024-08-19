#include <bits/stdc++.h>
using namespace std;

struct Node {
    string data;
    Node* next;
    Node(string val) : data(val), next(nullptr) {}
};


void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) {
            cout << " ";
        }
        current = current->next;
    }
    cout << endl;
}


Node* createLinkedList(const vector<string>& words) {
    if (words.empty()) return nullptr;
    Node* head = new Node(words[0]);
    Node* current = head;
    for (size_t i = 1; i < words.size(); ++i) {
        current->next = new Node(words[i]);
        current = current->next;
    }
    return head;
}


Node* eraseFirstKNodes(Node* head, int K) {
    Node* current = head;
    for (int i = 0; i < K; ++i) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    return current;
}


Node* appendNodes(Node* head, Node* tail) {
    if (!head) return tail;
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = tail;
    return head;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> soilem(n);

    for (int i = 0; i < n; i++) {
        cin >> soilem[i]; 
    }

    Node* head = createLinkedList(soilem);

    
    Node* current = head;
    Node* soz_head = new Node(current->data);
    Node* soz_current = soz_head;
    current = current->next;

    for (int i = 1; i < k; i++) {
        soz_current->next = new Node(current->data);
        soz_current = soz_current->next;
        current = current->next;
    }

  
    head = eraseFirstKNodes(head, k);

   
    head = appendNodes(head, soz_head);

   
    printLinkedList(head);

   
    current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}










/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> soilem(n);
    vector<string> soz;

    for (int i = 0; i < n; i++) {
        cin >> soilem[i]; 
    }
    for (int i = 0; i < k; i++) {
        soz.push_back(soilem[i]);
    }

        soilem.erase(soilem.begin(), soilem.begin() + k);
    


for(string elem:soz){
    soilem.push_back(elem);
}
for(string sozder :soilem){
    cout<<sozder<<" ";
}

}
*/