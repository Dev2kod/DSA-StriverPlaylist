#include<bits/stdc++.h>
using namespace std;

int max1(vector<int>& arr){
    int max = 0;
    int one = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==1){
            one++;
        }
        else{
            if(one>max){
                max=one;
            }
            one = 0;
        }
    }
    
    return max;
}

int main(){

    vector<int> arr = {1,2,3,2,1,1,1,2,3,1,1,1,1,1,1,1,1,4,1,1,2,2,1,1,1,1,3,34};
    int x = max1(arr);
    cout<<x;
    return 0;
}