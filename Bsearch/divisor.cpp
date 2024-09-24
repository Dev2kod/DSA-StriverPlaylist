#include<bits/stdc++.h>
using namespace std;

int prod(vector<int> &arr,int mid){
    int n = arr.size();
    int sum = 0 ;

    for (int i = 0; i < n; i++)
    {
        sum += ceil((double)(arr[i])/(double)(mid));
    }
    return sum;
}


int mindiv(vector<int> &arr,int thresh){
    int n = arr.size();
    int low = 1;
    int high = 9;
        while(low<=high){
        int mid = (low+high)/2;
        if (prod(arr,mid)<=thresh)
        {
            high = mid - 1;
        }
        else{
            low = mid+1;
        }}
        return low;
}



int main(){
    vector<int> arr = {1,4,7,9};
    int threshhold = 6;
    cout<<mindiv(arr,threshhold); 
    return 0;
}