#include<bits/stdc++.h>
using namespace std;

//counting instances of a number manually each time a req comes
int count(vector<int> arr,int number){
    int count=0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==number){
            count=count+1;
        }
    }
    
    return count;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,1,2,3,4,5,6,7,8,9,1};
    cout<<count(arr,1)<<endl;
    return 0;
}