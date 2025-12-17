#include<bits/stdc++.h>
using namespace std;

int Lsearch(vector<int>& arr,int k){
    int n = arr.size();
    for (int i = 0; i <n; i++)
    {
        if(arr[i]==k){
            return k;
        }
    }
    return 0;
}

int main(){
    vector<int> arr = {1,2,3,4,54,5,6,7,8,9,63,34};

    int index = Lsearch(arr,5);
    cout<<index;
    return 0;
}