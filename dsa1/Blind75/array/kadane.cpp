#include<bits/stdc++.h>
using namespace std;

int kadane1(vector<int> arr){
int n = arr.size();
int maxi = 0;
int sum = 0;
int start =0;
int end=-1;

for(int i=0;i<n;i++){
    if(sum==0){
        start = i;
    }

    sum+=arr[i];

    if(sum>maxi){
        maxi=sum;
        end=i;
    }

    if(sum<0){
        sum=0;
    }
}
for (int i = start; i <= end; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
return maxi;
}

int main(){
vector<int> arr = {1,2,3,-4,-4,5,-2,1,-3,5,2,-7,1,6,0,-5};
cout<<kadane1(arr);
    return 0;
}