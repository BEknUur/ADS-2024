#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void append(int data) {
        if (!head) {
            head = new Node(data);
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = new Node(data);
        }
    }

    void deleteEverySecondElement() {
        if (!head) return;

        Node* current = head;
        Node* prev = nullptr;
        int index = 1;

        while (current) {
            if (index % 2 == 0) {
                prev->next = current->next;
                delete current;
                current = prev->next;
            } else {
                prev = current;
                current = current->next;
            }
            index++;
        }
    }

    void printList() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    int n;
    cin >> n;

    LinkedList list;
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        list.append(value);
    }

    list.deleteEverySecondElement();
    list.printList();

    return 0;
}
   
   /* int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    list<int>sandar;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sandar.push_back(arr[i]);
        }
    }
    

    for(int elem:sandar){ 
        cout<<elem<<" ";
    }



}
*/