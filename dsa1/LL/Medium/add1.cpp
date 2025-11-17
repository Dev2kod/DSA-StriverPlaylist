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

int helper(Node* temp){
    if(temp==NULL){
        return 1;
    }
    int carry = helper(temp->next);
    temp->data = temp->data + carry;
    if(temp->data<10){
        return 0;
    }else{
        temp->data=0;
        return 1;
    }
}    

Node* add1(Node* head) {
    Node*temp = head;
    int carry = helper(temp);
    if(carry==1){
        Node* newNode = new Node(1,head);
        return newNode;
    }
    return head;
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
    vector<int> arr = {1,2,3};
    Node* head = arr2ll(arr);
    head = add1(head);
    printLL(head);
    return 0;
}
