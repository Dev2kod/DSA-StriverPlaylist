#include<bits/stdc++.h>
using namespace std;

int kadane(vector<int> &arr){
    int n = arr.size();
    int maxsum = -10;
    int sum = 0;

    for(int i =0;i<n;i++){
        if(sum<=0){
            sum = 0;
        }
        sum = sum+arr[i];
        maxsum = max(sum,maxsum);
    }
    return maxsum;
}


int main(int argc, char const *argv[])
{
    vector<int> arr = {-2,-3,3,5,2,-8,-6,-1,2,4,-4,6};
    int ans = kadane(arr);
    cout<<ans;
    return 0;
}
