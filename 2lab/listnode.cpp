#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};


void insertAtPosition(Node*& head, int data, int pos) {
    Node* newNode = new Node(data);
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int san;
    cin >> san;
    int pos;
    cin >> pos;

    insertAtPosition(head, san, pos);
    printList(head);

    return 0;
}







    /*
    int n;
    cin>>n;
    vector<int>sandar(n);
    for(int i=0;i<n;i++){
        cin>>sandar[i];
    }
    int san;
    cin>>san;
    int pos;
    cin>>pos;
    sandar.insert(sandar.begin()+pos,san);
    for(int elem:sandar){
        cout<<elem<<" ";
    }

*/

