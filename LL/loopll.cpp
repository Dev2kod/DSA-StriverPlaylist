#include <bits/stdc++.h>
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

int loopll(Node* head){
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) {
            return 123;  // Loop detected
        }
    }
    return 321;  // No loop
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};  // Array to be converted to linked list
    Node* head = arr2ll(arr);

    // Creating a loop: Connect the last node (7) to the node with value 4
    Node* temp = head;
    Node* loopNode = nullptr;
    while (temp->next != NULL) {
        if (temp->data == 4) {
            loopNode = temp;  // Store the node with value 4
        }
        temp = temp->next;
    }
    // Make the last node point to node 4
    temp->next = loopNode;

    // Detecting the loop in the linked list
    cout << loopll(head) << endl;  // Should return 123 if loop is detected

    return 0;
}
