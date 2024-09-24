//Author:Devesh Anil Khankhoje
// Date: 12 Aug 2024

#include<bits/stdc++.h>
using namespace std;

void twosum(vector<int> &arr,int k){
// Using two pointer approach
    int n = arr.size();
    int sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            sum = 0;
            //if sum equal to k then the funtion returns the number
            sum = arr[i]+arr[j];
            if(k==sum){
                cout<<"the numbers are "<<i<<" "<<j<<endl;
                break;
            }
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1,6,2,3,4,7,5,8,3};
    twosum(arr,15);
    return 0;
}
