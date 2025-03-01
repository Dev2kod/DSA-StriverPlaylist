#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;     
    Node* next;    
    Node* back;     

    Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr) {
        data = data1;
        next = next1; 
        back = back1; 
    }
};


Node* deleteTail(Node* head){
    if(head==nullptr || head->next == nullptr){
        return NULL;
    }

    Node* tail = head;
    while (tail->next!=nullptr)
    {
        tail = tail->next;
    }
    Node* prev = tail->back;
    tail->back=nullptr;
    prev->next=nullptr;
return head;
}

Node* kelementdelete(Node* head,int k){
    int count = 0;
    if(head==nullptr || head->next==nullptr){
        return NULL;
    }
    Node* temp = head;
    while (temp != nullptr)
    {   count +=1;
        temp = temp->next;
        if(count==k){
            break;
        }
    }

    if(temp->next==nullptr){
        head = deleteTail(head);
        return head;
    }

    Node* prev = temp->back;
    Node* next = temp->next;

    prev->next=next;
    next->back=prev;

    temp->back=temp->next=nullptr;
    
    return head;
}

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

void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
   vector<int> arr = {1, 2, 3, 4, 5};
   Node* head = arr2ll(arr);
    head = kelementdelete(head,3);
   print(head);

   return 0;
}

