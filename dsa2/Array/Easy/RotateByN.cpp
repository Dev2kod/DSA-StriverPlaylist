#include<bits/stdc++.h>
using namespace std;

void rotateByK(vector<int>& arr,int k){
    int n = arr.size();
    vector<int> temp={0};

    for (int i = 0; i <k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n-k; i++)
    {
        arr[i] = arr[i+k];
    }
    for (int i = n-k; i < n; i++)
    {
        arr[i]=temp[i-n+k];
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};

    rotateByK(arr,6);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];
    }
    

    return 0;
}