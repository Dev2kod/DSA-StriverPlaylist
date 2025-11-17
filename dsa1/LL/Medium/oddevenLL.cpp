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
Node* oddeven(Node* head){
    if (!head || !head->next) return head;  // Handle edge case for empty or single node list

    Node* odd = head;
    Node* even = head->next;
    Node* evenhead = even;  // Store the head of the even list

    while (even != NULL && even->next != NULL) {
        odd->next = even->next;  // Link current odd to the next odd node
        odd = odd->next;         // Move odd pointer

        even->next = odd->next;  // Link current even to the next even node
        even = even->next;       // Move even pointer
    }

    odd->next = evenhead;  // Attach the even list after the odd list
    return head;
}


int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = arr2ll(arr);
    head = oddeven(head);
    printLL(head);
 
    return 0;
}
