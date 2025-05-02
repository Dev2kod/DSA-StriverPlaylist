#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;                  
    int right = height.size() - 1; 
    int maxArea = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        int w = right - left;
        int area = h * w;

        maxArea = max(maxArea, area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}

int main(){

    vector<int> arr = {1,2,7,3,9,2,5,4,6,3};
    cout<<maxArea(arr);
    return 0;
}