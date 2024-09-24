#include<bits/stdc++.h>
using namespace std;

void slargest(int arr[], int n){
    int max=arr[0];
    int smax=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            smax=max;
            max = arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<"second largest is "<<smax;
}

void ssmaller(int a[], int n ){
    int min = a[0];
    int smin = INT_MAX;
    for(int i = 1;i<n;i++){
        if (a[i]<min){
            smin = min;
            min = a[i];
        }
        else if (a[i]!=min&&a[i]<smin)
        {
            smin=a[i];
        }
        
    }
    cout<<"\nSecond smallest is "<<smin;
}

int main()
{
    int array[]={4,79,134,868,124,74,234,345};
    int n = sizeof(array)/sizeof(array[0]);

    slargest(array, n); 
    ssmaller(array,n);   
    return 0;
}