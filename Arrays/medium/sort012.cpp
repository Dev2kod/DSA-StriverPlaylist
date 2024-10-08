#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr){
    int n = arr.size();
    int low = 0,mid=0,high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else if (arr[mid]==2)
        {
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    
    for (auto i : arr)
    {
        cout<<i<<" ";
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr={0,1,0,2,0,1,1,1,0,2,2,0,2};
    sort012(arr);
    return 0;
}
