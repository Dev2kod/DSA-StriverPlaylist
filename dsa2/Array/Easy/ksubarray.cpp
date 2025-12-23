#include <bits/stdc++.h>
using namespace std;

int subarray(vector<int> &arr,int k)
{
    int n = arr.size();
    int max = 0;
    int len = 0;
    int sum = 0;
    int i =0;
    int j = 0;
    while(i<n-max){
        sum = sum + arr[j];
        len = len+1;
        j++;
        if(sum==k){
            if(len>max){
            max = len;
            }
            sum = 0;
            i=i+1;
            j=i;
            len=0;
        }
        if(sum>k){
            sum = 0;
            i=i+1;
            j=i;
            len=0;
        }
    }
    return max;
}

int main()
{
    vector<int> arr = {10,8,8,8,8,8,8,8,88,8,8, 5, 2, 7, 1, 9};

    int num = subarray(arr,10);
    cout << num;
    return 0;
}