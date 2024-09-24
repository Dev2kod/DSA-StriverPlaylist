#include <bits/stdc++.h>
using namespace std;

int student(int mid,vector<int> arr){
    int count =1;
    int pages = arr[0];

    for (int i = 1; i <arr.size(); i++)
    {
        if(pages+arr[i]<=mid){
            pages = pages+arr[i];
        }else{
            pages = arr[i];
            count = count +1;
        }
    }
    return count;
} 

int final(vector<int> &arr,int std){
    int low = 49;
    int high = 172;
    while(low<=high){
        int mid = (low+high)/2;
        if(student(mid,arr)<=std){
            high = mid -1; 
        }else{
            low = mid+1;
        }
    }
    return low;
}

int main(){
    vector<int> arr = {25,46,28,49,24};
    int student = 4;

    cout<<final(arr,student);

    return 0;
}