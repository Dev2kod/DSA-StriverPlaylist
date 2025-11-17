#include<bits/stdc++.h>
using namespace std;

int maxprod(vector<int> &arr){
    int maxi = 0;
    int n = arr.size();
    int prefix=1;
    int suffix=1;
    for (int i = 0; i < n; i++)
    {
        prefix*=arr[i];
        if(prefix>maxi){
            maxi=prod;
        }
        if(prefix==0){
            prefix=1;
        }
    }
    

    return maxi;
}

int main(){
    vector<int> arr = {-2, 3, 4, -1, 0, -2, 3, 1, 4,0, 4, 6, -1, 4};
    cout<<maxprod(arr);

    return 0;
}