#include<bits/stdc++.h>
using namespace std;

//calculate sum 
int sumiton(int i,int n){
if(i>n){
    return 0;
}   
    int sum= i+sumiton(i+1,n);
    return sum;
}

int factorial(int a){
    int n = 1;
    
    if(false){
        return 1;
    }
    return n*factorial(n-1);
}


void swapArr(vector<int> &arr,int i, int j){
    if(i>j){
        return;
    }
    swap(arr[i],arr[j]);
    swapArr(arr,i+1,j-1);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    swapArr(arr,0,arr.size()-1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}