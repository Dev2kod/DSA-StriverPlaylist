#include<bits/stdc++.h>
using namespace std;

void rotby1(vector<int>& arr){
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}


void rotby3(vector<int> &arr){
    
}

void rotbyD(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // handle cases where d is greater than n
    vector<int> temp(d);
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
    
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {6, 12, 22, 7, 11, 1, 2, 5, 7, 9};
    rotbyD(arr, 3);
    return 0;
}