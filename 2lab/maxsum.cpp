#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};


int findMaxSum(ListNode* head) {
    int max_sum = INT_MIN;
    int current_sum = 0;
    
    while (head != NULL) {
        current_sum = max(head->val, current_sum + head->val);
        max_sum = max(max_sum, current_sum);
        head = head->next;
    }
    
    return max_sum;
}


ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < n; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

  
    ListNode* head = createLinkedList(arr, n);

   
    cout << findMaxSum(head) << endl;

    return 0;
}
