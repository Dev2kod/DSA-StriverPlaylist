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
    if(head==nullptr||head->next==nullptr){
        return head;
    }


    Node* back = nullptr;
    Node* temp = head;
    Node* front = temp;
    
    while (temp!=nullptr)
    {
        front = front->next;
        temp->next=back;
        back=temp;
        temp = front;
    }
    return back;
}

int main() {
    vector<int> arr = {2, 3, 7, 4, 9, 54};
    Node* head = arr2ll(arr);

    cout << "Original Linked List: ";
    printLL(head);

    // Reversing the linked list
    Node* head2 = reverse1(head);

    cout << "Reversed Linked List: ";
    printLL(head2);

    return 0;
}
