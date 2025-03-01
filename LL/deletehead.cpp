#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor for creating a node with data and next pointer
    Node(int data1, Node* next1 = nullptr){
        data = data1;
        next = next1;
    }
};

// Function to convert an array (vector) into a linked list
Node* arr2ll(vector<int>& arr){
    int n = arr.size();
    if (n == 0) return nullptr;  // Handle empty array case

    Node* head = new Node(arr[0]);  // Initialize the head node
    Node* mover = head;
    for (int i = 1; i < n; i++)
    {   
        Node* temp =  new Node(arr[i]);  // Create a new node for each element
        mover->next = temp;  // Link the current node to the new node
        mover = temp;  // Move to the new node
    }
    return head;
}

// Helper function to print the linked list
void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deletehead(Node* head){
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 4, 6, 8, 9};
    Node* head = arr2ll(arr);
    head = deletehead(head);
    printLL(head);

    return 0;
}
