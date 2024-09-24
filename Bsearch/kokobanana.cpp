#include<bits/stdc++.h>
using namespace std;

int f(vector<int>& arr,int limit,int mid){
    int n = arr.size();
    int hrs =0;

    for (int i = 0; i < n; i++)
    {
        hrs = hrs + ceil((double)arr[i]/(double)mid);
    }
    if(hrs<=limit){
        return 1;
    }else{
    return 0;
    }
}

int minspeed(vector<int> &arr,int limit){
    int low = 1;
    int high = 9;
    while(low<=high){
        int mid = (low+high)/2;
        if(f(arr,limit,mid)==1){
            high = mid-1;
        }else{
            low = mid +1;
        }
    }
    return low;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {3,4,6,10};
    int limit = 8;
    cout<<minspeed(arr,limit);
    return 0;
}
