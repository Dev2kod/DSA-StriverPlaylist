#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &arr,int k){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int index = 0;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]==k){return mid;}
        
        else if(arr[low]<=k&&k<arr[mid]){
            high = mid-1;
        }
        else if(arr[mid]<k&&arr[high]>=k){
            low=mid+1;
        }
    }

    return -1;
}

int main(){
    vector<int> arr={5,6,7,8,1,2,3,4,5};
    cout<<find(arr,4);

    return 0;
}