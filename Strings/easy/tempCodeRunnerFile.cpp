#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char arr[6]="messi";
    int start = 0;
    int end = strlen(arr)-1;
    cout<<arr<<endl;
    while (start<end){
        swap(arr[start],arr[end]);
        start++;
        end++;
    }  
    cout<<arr;

    
    return 0;
}
