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

Node* delKey(Node* head,int key){
    Node* temp = head;
    while (temp!=NULL)
    {
        if(temp->data==key){
            if (temp==head)
            {
                head=head->next;
                temp=head;
            }
            Node* piche= temp->back;
            Node* aage = temp->next;
            if(piche!=NULL)piche->next = aage;
            if(aage!=NULL) aage->back = piche;
            temp = temp->next; 
        }
        else{
            temp = temp->next;
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
    vector<int> arr = {9,10,10,2,10,5};
    Node* head = arr2ll(arr);
    head = delKey(head,10);
    print(head);
    return 0;
}
