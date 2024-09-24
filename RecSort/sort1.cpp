#include<bits/stdc++.h>
using namespace std;


void bubblesort(){
    int n;
    cin>>n;

    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    for (int i=n;i>0;i--){
        for(int j=0;j<i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        for (int l = 0; l < n; l++)
        {
            cout<<arr[l];
        }
        cout<<endl;
    }

    for(int j=0;j<n;j++){
        cout<<arr[j];
    }
}

void insertionsort(){
    int n;
    cin>>n;

    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    for (int i=1;i<n;i++){
        for(int j=i;j>0&&arr[j-1]>arr[j];j--){
            swap(arr[j-1],arr[j]);
        }
        for (int k = 0; k <n; k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }

    for(int j=0;j<n;j++){
        cout<<arr[j];
    }
}

int main()
{
    void insertionsort();

    insertionsort();
    return 0;
}

