#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int> &arr,int k){
    int n = arr.size();
    int sum = arr[0];
    int len = 0;
    int i=0,j=0;
        while (j<n)
        {
            j++;
            sum = sum + arr[j];
            while(i<j && sum>k){
                sum -= arr[i];
                i++;
            }
            if(sum == k){
                len = max(j-i+1,len);
            }
        }
        
    
    return len;

}

int main(int argc, char const *argv[])
{
    vector<int> arr = {4,2,1,5,3,1,1,1,1,3,2,1};
    int s = subarray(arr,4);
    cout<<s;
    return 0;
}
