#include<bits/stdc++.h>
using namespace std;
int min(vector<int> arr){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int men = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<arr[mid]){
            men = min(men,arr[low]);
            low=mid+1;
        }
        if(arr[mid]<arr[high]){
            men = min(arr[mid],men);
            high=mid-1;
        }
        
    }
    return men;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {7,8,9,777,8888,1,2,3,4,5};
    int x = min(arr);
    cout<<x;
    return 0;
}