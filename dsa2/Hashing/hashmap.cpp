#include<bits/stdc++.h>
using namespace std;

int main(){
//declaring and initializing an array
int n;
cout<<"What should be size of your array : ";
cin>>n;

int arr[n];
for (int i = 0; i < n; i++)
{
    cout<<"enter number "<< i <<"of your array ";
    cin>>arr[i];
}

cout<<"followign is ur array"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}