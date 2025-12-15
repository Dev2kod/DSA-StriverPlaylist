#include<bits/stdc++.h>
using namespace std;

void checkSort(vector<int> arr){

    int n = arr.size();

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            cout<<"array not sorted, check position "<<i;
            return;
        }
    }
    cout<<"array Sorted!";
    
}

int main(){
    vector<int> arr = {10,23,44,56,8,98,234};
    checkSort(arr);

    return 0;
}