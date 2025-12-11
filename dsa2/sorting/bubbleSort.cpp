#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    int i = n-1;
    while(i>0){
    int min = INT_MAX;
    int index=0;
    for (int j = 0; j <i; j++)
    {
        if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    }
    i--;
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
    bubbleSort(arr);

    cout<<"Sorted Array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

cout<<endl;
    return 0;
}