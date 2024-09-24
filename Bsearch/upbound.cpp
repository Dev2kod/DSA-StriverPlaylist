#include<bits/stdc++.h>
using namespace std;

int upbound(vector<int> &arr,int x){
    int n = arr.size();
    int upbound=-1;
    int low=0;
    int high = n-1;
    while (low<=high)
    { 
        int mid = (low+high)/2;
        if (arr[mid]==x)
        {
            upbound = mid;
            break;
        }
        else if(arr[mid]<x){
            upbound = mid;
            low=mid+1;
            mid = (low+high)/2;
        }
        else{
            high=mid-1;
            mid = (low+high)/2;
        }
    }
    return upbound;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1,3,11,33,44,55,77,223};
    int target = 7;
    int y= upbound(arr,8);
    cout<<y;
    return 0;
}
