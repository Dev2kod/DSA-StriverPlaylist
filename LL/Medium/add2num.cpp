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

Node* add(Node* head1,Node* head2){
    Node* dummy = new Node(-1);
    Node* curr = dummy;
    Node* t1 = head1;
    Node* t2 = head2;
    int carry = 0;

    while (t1!=NULL || t2!=NULL)
    {
        int sum = carry;
        if(t1){
            sum = sum + t1->data;
        }
        if(t2){
            sum = sum + t2->data;
        }
        curr->next = new Node(sum%10);
        curr = curr->next;
        carry = sum/10;

        if(t1!=NULL){
            t1=t1->next;
        }
        if(t2!=NULL){
            t2=t2->next;
        }
    }
    if(carry!=0){
        curr->next = new Node(carry);
        curr = curr->next;
    }
    return dummy->next;
}

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


int main()
{
    vector<int> arr1 = {1,7,2,3};
    vector<int> arr2 = {3,2,1};
    Node* head1 = arr2ll(arr1);
    Node* head2 = arr2ll(arr2);
    Node* head = add(head1,head2);
    printLL(head);
    return 0;
}
