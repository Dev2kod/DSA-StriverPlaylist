#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;     
    Node* next;    
    Node* back;     

    Node(int data1, Node* next1 = NULL) {
        data = data1;
        next = next1; 
    }
};
Node* arr2ll(vector<int>& arr){
    int n = arr.size();
    if (n == 0) return NULL; 
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

void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* delmid(Node* head) {
    if (head == NULL || head->next == NULL) {
        // If the list is empty or has only one element, return as it is.
        return head;
    }
    
    Node* fast = head;
    Node* slow = head;
    
    while (fast->next != NULL && fast->next->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    Node* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;
    return head;
}

int main()
{
    vector<int> arr = {1,2,3,9,4,5,6,7};
    Node* head = arr2ll(arr);
    head = delmid(head);
    printLL(head);
    return 0;
}
