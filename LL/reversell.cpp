#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

// Function to convert array to linked list
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

// Function to print the linked list
void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to reverse the linked list
Node* reverse1(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;  // Store next node
        curr->next = prev;  // Reverse the current node's pointer
        prev = curr;        // Move prev to current node
        curr = next;        // Move to next node
    }

    return prev;  // Return new head of the reversed list
}

int main() {
    vector<int> arr = {2, 3, 7, 4, 9, 54};
    Node* head = arr2ll(arr);

    cout << "Original Linked List: ";
    printLL(head);

    // Reversing the linked list
    head = reverse1(head);

    cout << "Reversed Linked List: ";
    printLL(head);

    return 0;
}
