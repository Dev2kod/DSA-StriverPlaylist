#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& arr){
    int n = arr.size();
    int k = arr[0];
    for(int i =0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1]= k;
}

int main(){

    vector<int> arr= {1,2,3,4,5,6,7};
    leftRotate(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}