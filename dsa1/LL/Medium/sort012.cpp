#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = NULL) {
        data = data1;
        next = next1;
    }
};

Node* sort012(Node* head) {
    // Create dummy nodes for the three lists
    Node l0(0), l1(0), l2(0);
    Node* zero = &l0;
    Node* one = &l1;
    Node* two = &l2;

    // Traverse the list and separate nodes into three lists
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == 0) {
            zero->next = temp;
            zero = temp;
        } else if (temp->data == 1) {
            one->next = temp;
            one = temp;
        } else {
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }

    // Connect the three lists
    zero->next = (l1.next != NULL) ? l1.next : l2.next;
    one->next = l2.next;
    two->next = NULL;

    // Return the head of the new list
    return l0.next;
}

Node* arr2ll(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return NULL; 
    Node* head = new Node(arr[0]);  // Initialize the head node
    Node* mover = head;
    for (int i = 1; i < n; i++) {
        Node* temp = new Node(arr[i]);  // Create a new node for each element
        mover->next = temp;  // Link the current node to the new node
        mover = temp;  // Move to the new node
    }
    return head;
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 2, 0, 2, 1, 1, 0, 2};
    Node* head = arr2ll(arr);
    head = sort012(head);
    printLL(head);
    return 0;
}
 