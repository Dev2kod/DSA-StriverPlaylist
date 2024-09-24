#include<bits/stdc++.h>
using namespace std;

void once(vector<int> &arr){
    int max = 0;
    int count = 0;
    
}

void maxone(vector<int> &arr){
    int max=0;
    int count=0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1){
            count += 1;
            if(count>=max){
            max = count;
            }
        }
        else{
            count = 0;
        }
    }
    cout<<"Max number of 1s is "<<max;
    
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {0,0,1,1,1,0,1,0,0,1,1,1,1,0};
    maxone(arr);
    return 0;
}
