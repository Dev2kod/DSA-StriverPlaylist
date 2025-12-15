#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr){
    int count = arr.size();
    int i =0;
    int j = 0;

    while(j<count){
        if(arr[i]==arr[j]){
            j++;
        }
        else if (arr[i]!=arr[j])
        {
            i++;
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return i;
}

int main(){
    vector<int> arr= {1,1,1,2,3,3,4}; 
    int k = removeDuplicates(arr);
    for (int i = 0; i <= k; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}