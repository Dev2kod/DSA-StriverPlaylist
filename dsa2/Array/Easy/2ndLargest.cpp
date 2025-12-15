#include<bits/stdc++.h>
using namespace std;

int secondSmallest(vector<int>& arr) {
    int n = arr.size();
    int small = INT_MAX;
    int second_small = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < small) {
            second_small = small;
            small = arr[i];
        } 
        else if (arr[i] < second_small && arr[i] != small) {
            second_small = arr[i];
        }
    }
    return second_small; }

int SecondL(vector<int>& arr){
    int n = arr.size();
    int max = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max2 = max;
            max = arr[i];            
        }
    }
    return max2 ;
} 

int main(){
    vector<int> arr = {10,312,64,12,746,1234,74};
    int largest = SecondL(arr);
    int smallest = secondSmallest(arr);
    cout<<"Second largest element in array is: "<<largest<<endl;
    cout<<"Second smallest element in array is: "<<smallest<<endl;

    return 0;
}