#include<bits/stdc++.h>
using namespace std;

int min(vector<int> &arr){
    int n = arr.size();
    int low=0;
    int high = n-1;
    int ans=100;
    
    while(low<high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid]){
            low=mid+1;
            ans = min(arr[low],ans);
        }
        if(arr[mid]<=arr[high]){
            high = mid-1;
            ans = min(ans,arr[mid]);
        }
    }

    return ans;
}

int main(){

    vector<int> arr = {4,5,6,7,8,9,10,1,2,3};
    cout<<min(arr);

    return 0;
}