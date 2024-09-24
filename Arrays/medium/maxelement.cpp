#include<bits/stdc++.h>
using namespace std;

int maxrepeat(vector<int> &arr){
    int n=arr.size();
    int count =0;
    int i=0;
    int el;

    for (int i = 0; i < n;i++)
    {
        if(count==0){
            el = arr[i];
        }
        if(arr[el]==arr[i]){
            count++;
        }
        if(arr[el]!=arr[i]){
            count--;
        }
    }
    return el;
    
}

int main(int argc, char const *argv[])
{
    vector<int> arr={3,3,3,3,3,11,11,3,3,11,11,11};
    int x = maxrepeat(arr);
    cout<<x<<" ";
    return 0;
}


