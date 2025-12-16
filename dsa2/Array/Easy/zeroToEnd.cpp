#include<bits/stdc++.h>
using namespace std;

void zerosToEnd(vector<int>& arr){
    int n = arr.size(); 
    int i =0;
    int j =0;
    if(n<=1){
        return;
    } 
    while(j<n){
        if(arr[i]!=0 && arr[j]!=0){
            i++;
            j++;
        }
        if(arr[i]==0 && arr[j]==0){
            j++;
        }
            if(arr[i]==0 && arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
    }
}

int main(){
    vector<int> arr= {1,0,1,2,0,0,0,3,3,4}; 
    zerosToEnd(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}