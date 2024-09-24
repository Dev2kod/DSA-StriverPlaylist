#include<bits/stdc++.h>
using namespace std;

void linsearch(vector<int> &arr,int r){
    int n = arr.size();
    int pos;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==r){
            pos = i+1;
            res = 1; 
            break;
        }
    }
    if(res==1){
    cout<<r<<" is present on "<<pos<<" position of array.";
    }
    else{
        cout<<"element not present in array"<<endl;
    }
}
    
void appearonce(vector<int> &arr){
    int n = arr.size();
    map<int,int> mpp;
    for(int elem : arr){
        mpp[elem]++; // increment the count for each element
    }

    for(auto elem: mpp){
        if(elem.second==1){
            cout<<elem.first<<" appears once"<<endl;
        }
    }
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1,1,2,2,4,6,6,3,3,6,0,0};
    appearonce(arr);
    return 0;
}
