#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1 = NULL, Node* back1 = NULL) {
        data = data1;
        next = next1;
        back = back1;
    }
};

Node* delDup(Node* head){
    Node* temp = head;
    Node* mover = temp;
    while (mover!=NULL)
    {
        if(mover->next==NULL && mover->data==temp->data){
            temp->next = NULL;
        }
        if(mover->data==temp->data){
            mover = mover->next;
        }
        else{
            temp->next = mover;
            mover->back = temp;
            temp = mover;
        }
    }        
    return head;
}

Node* arr2ll(vector<int>& arr) {
    if (arr.empty()) return NULL;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }

    return head;
}

void print(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1,2,2,4,4,5,5,6,7,8,8,8};
    Node* head = arr2ll(arr);
    head = delDup(head);
    print(head);
    return 0;
}
