#include<bits/stdc++.h>
using namespace std;

int dayreq(vector<int> &wt,int cap){
    int day = 1;
    int load = 0;
    for (int i = 0; i < wt.size(); i++)
    {
        if (load + wt[i]>cap)
        {
            day = day +1;
            load = wt[i];
        }
        else{
            load = load + wt[i];
        }
        }
    return day;
}

int mincap(vector<int> &arr,int days){
    int low = 10;
    int high = 55;

    while (low<=high)
    {
        int mid = (low+high)/2;
        int x = dayreq(arr,mid);
        if(x<=days){
            high =mid-1;
        }   
        else{
            low = mid+1;
        }
    }
    return low;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout<<mincap(arr,days);
    return 0;
}
