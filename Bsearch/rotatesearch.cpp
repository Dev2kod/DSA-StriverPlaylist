#include<bits/stdc++.h>
using namespace std;

int rot(vector<int> arr,int x ){
   int n = arr.size();
   int low = 0;
   int high = n-1;
   int ans = -1;
   while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==x){
        return mid;
        break;
    }
    if(arr[low]<=arr[mid]){
        if(arr[low]<=x&&x<arr[mid]){
            low = mid+1;
        }else{
            high = mid -1;
        }
    if(arr[high]>=arr[mid]){
        if(arr[mid]<=x&&arr[high]>x){
            high = mid-1;
        }else{
            low = mid+1;
        }

    }
    }
   }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {7,8,9,1,2,3,4,5,6};
    int ans = rot(arr,5);
    cout<<ans;
    return 0;
}
