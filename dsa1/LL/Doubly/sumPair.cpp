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

Node* findTail(Node* head){
    Node* temp = head;
    while(temp!=NULL&&temp->next!=NULL){
        temp=temp->next;
    }
    return temp;
}

vector <pair<int,int>> sumPair(Node* head,int key){
    vector <pair<int,int>> ans;
    Node* temp = head;
    Node* tail = findTail(head);
        while (temp != tail && temp->data <= tail->data) { 
        if (temp->data + tail->data == key) { // Pair found
            ans.push_back({temp->data, tail->data});
            temp = temp->next; 
            tail = tail->back; 
        } else if (temp->data + tail->data < key) { 
            temp = temp->next; 
        } else {
            tail = tail->back; 
        }
    }

    return ans;
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
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = arr2ll(arr);
    vector<pair<int, int>> pairs = sumPair(head, 5);
    for (auto i : pairs) {
        cout << "(" << i.first << ", " << i.second << ") "; // Properly formatted output
    }
    cout << endl;
    return 0;
}
