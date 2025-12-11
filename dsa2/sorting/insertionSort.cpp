#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr){
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int j=i;
        while(j>0){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            j--;
        }        
    }
    
}

int main(){
    vector<int> arr = {12,43,1,34,76,21,7};
    
    cout<<"Initial Array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionSort(arr);

    cout<<"Sorted Array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

cout<<endl;
    return 0;
}