#include<bits/stdc++.h>
using namespace std;

void intsort(vector<int> &arr){
    int n = arr.size();
    int posi = 0;
    int nega = 1;
    vector<int> ans(n,0);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            ans[posi]=arr[i];
            posi+=2;
        }
        else{
            ans[nega]=arr[i];
            nega+=2;
        }
    }

    for(auto x : ans){
        cout<<x<<", ";
    }    
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1,-1,-2,3,-2,5,5,-6};
    intsort(arr);
    return 0;
}
