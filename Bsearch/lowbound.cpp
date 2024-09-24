#include<bits/stdc++.h>
using namespace std;

int lowbound(vector<int> &arr,int x){
    int n = arr.size();
    int lowbound=n;
    int low=0;
    int high = n-1;
    while (low<=high)
    { 
        int mid = (low+high)/2;
        if (arr[mid]==x)
        {
            lowbound = mid;
            break;
        }
        else if(arr[mid]>x){
            lowbound = mid;
            high=mid-1;
            mid = (low+high)/2;
        }
        else{
            low=mid+1;
            mid = (low+high)/2;
        }
    }
    return lowbound;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1,2,3,3,5,8,8,9,9,10};
    int target = 9;
    int y= lowbound(arr,11);
    cout<<y;
    return 0;
}
