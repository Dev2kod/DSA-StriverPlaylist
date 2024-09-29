#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;     
    Node* next;    
    Node* back;     

    Node(int data1, Node* next1 = nullptr) {
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

Node* findmid(Node* head){
    Node* fast = head;
    Node* slow = head;
    while(fast !=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = arr2ll(arr);
    head = findmid(head);
    cout<<head->data;
    return 0;
}
