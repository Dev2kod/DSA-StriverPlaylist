#include <bits/stdc++.h>
using namespace std;

int ispossible(vector<int> &arr,int cows,int mid){
    int n = arr.size();
    int count = 1;
    int pos = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]-pos>=mid){
            count ++;
            pos = arr[i];
        }
    }
    if(count>=cows){
        return 1;
    }else{
        return 0;
    }
}

int mindist(vector<int> &arr,int cows){
    int low = 1;
    int high = 10;
    while(low<=high){
        int mid = (low+high)/2;
        if(ispossible(arr,cows,mid)==1){
            low=mid+1;
        }else{
            high = mid -1;
        }
    }
    return high;
}

int main(){

    vector<int> arr = { 0,3,4,6,7,8,12};
    int cows = 4;

    cout<<mindist(arr,cows);

    return 0;
}