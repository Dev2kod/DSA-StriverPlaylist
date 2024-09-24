#include<bits/stdc++.h>
using namespace std;

int stocks(vector<int> &arr){
    int n = arr.size();
    int mini = arr[0];
    int profit = 0;
    int maxprofit = 0;
    for (int i = 1; i < n; i++){
        mini = min(mini,arr[i]);
        cout<<mini;
        profit = arr[i]-mini;
        maxprofit = max(maxprofit,profit);
    }    
    return maxprofit;
}

int main(){

    vector<int> arr={2,5,9,4,7,6,8,1};
    int x = stocks(arr);
    cout<<x;
    return 0;
}