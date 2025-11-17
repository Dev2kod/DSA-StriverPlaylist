#include<bits/stdc++.h>
using namespace std;

vector<int> nextper(vector<int> &arr){
    int n = arr.size();
    int bp = -1;
    for (int i = n-2; i >= 0; i--)
    {
        if(arr[i]<arr[i+1]){
            bp = i;
            break;
        }
    }
    for(int i =n-1;i>bp;i--){
        if(arr[i]>arr[bp]){
            swap(arr[i],arr[bp]);
            break;
        }
    }
    int low =bp+1;
    int high = n-1;   
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }   

    return arr;
}

int main(){
    vector<int> arr = {2,1,5,4,3,0};
    vector<int> ans = nextper(arr);
    for (auto it : ans) {
        cout << it << " ";
    }

    
    return 0;
}