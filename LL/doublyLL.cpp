#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list (forward direction)
    Node* back;     // Pointer to the previous node in the list (backward direction)

    // Constructor for a Node with both data, a reference to the next node, and a reference to the previous node
    Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr) {
        data = data1;
        next = next1; 
        back = back1; 
    }
};

// Function to convert an array to a doubly linked list
Node* arr2ll(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return nullptr;  // Handle empty array case

    Node* head = new Node(arr[0]);  // Create the head node
    Node* prev = head;              // Keep track of the previous node

    for (int i = 1; i < n; i++) {   
        Node* temp = new Node(arr[i]);  // Create a new node for each element
        prev->next = temp;              // Link the previous node to the current one
        temp->back = prev;              // Set the 'back' pointer
        prev = temp;                    // Move prev to the current node
    }

    return head;
}

// Function to print the linked list from head to tail (forward direction)
void printForward(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    // Convert array to doubly linked list
    Node* head = arr2ll(arr);

    // Print the linked list in forward and backward directions
    cout << "Forward: ";
    printForward(head);

    cout << "Backward: ";
    printBackward(head);

    return 0;
}
