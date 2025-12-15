#include<bits/stdc++.h>
using namespace std;

int findLargest(vector<int>& arr){
    int n = arr.size();
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    

    return max;
}

int main(){
    vector<int> arr = {10,284,53,1,624,124,4854,146,58};
    int largest = findLargest(arr);
    cout<<"largest element in array is: "<<largest<<endl;
    return 0;
}