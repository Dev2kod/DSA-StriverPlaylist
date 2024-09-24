#include<bits/stdc++.h>
using namespace std;

void zeroend(vector<int> &arr){
    int n = arr.size();
    
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int m = temp.size();
      
    
    for (int i = 0 ; i < m; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = m; i < n; i++)
    {
        arr[i]=0;
    }
    for (int i = 0; i < m; i++)
    {
        cout<<temp[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sortzero(vector<int> arr){
 int   n = arr.size();
 int j;
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            j=i;
        }
    }
    for (int i = j+1; i < n; i++)
    {
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    vector<int> arr = {0,2,0,4,0,5,90,2,};
    sortzero(arr);
    return 0;
}
