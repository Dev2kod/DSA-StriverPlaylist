#include<bits/stdc++.h>
using namespace std;
int ok(vector<int> arr,int mid){
    int count =1;
    int work = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(work+arr[i]<=mid){
            work = work + arr[i];
        }else{
            count = count+1;
            work = 0;
        }
    }
    return 0;
}
int minwork(vector<int> &arr,int minwork){
    int low = 40;
    int high = 100;
    while(low<=high){
        int mid = (low+high)/2;
        if(ok(arr,mid)<=minwork){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return low;
}
int main(){
    vector<int> arr = {10,20,30,40};
    int painter = 2;
    cout<<minwork(arr,painter);

    return 0;
}