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


Node* sort012(Node* head){
    Node* l0 = NULL;
    Node* zero = l0;

    Node* l1 = NULL;
    Node* one = l1;
    
    Node* l2 = NULL;
    Node* two = l2;
    
    Node* temp = head;
    while (temp!=NULL)
    {
        if(temp->data==0){
            zero->next=temp;
            zero = temp;
        }
        else if (temp->data==1)
        {
            one->next=temp;
            one = temp;
        }
        else{
            two->next= temp;
            two = temp;
        }

        temp=temp->next;
    }
    if (l1->next!=NULL)
    {
        zero->next=l1->next;
    }else{
        zero->next = l2->next;
    }
    one->next=l2->next;

    two->next = NULL;
    Node* newhead = l0->next;
    
    return newhead;
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
    vector<int> arr = {0,1,0,1,2,0,2,1,1,0,2};
    Node* head = arr2ll(arr);
    head = sort012(head);
    cout<<head->data;
    printLL(head);
    return 0;
}
