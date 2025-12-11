#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr){
    int n = arr.size();
    int i = 0;
    while(i<n){
    int min = INT_MAX;
    int index=0;
    for (int j = i; j < n; j++)
    {
        if(arr[j]<min){
            min = arr[j];
            index=j;
        }
    }
    swap(arr[i],arr[index]);
    i++;
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
    selectionSort(arr);

    cout<<"Sorted Array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

cout<<endl;
    return 0;
}