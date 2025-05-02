#include<bits/stdc++.h>
using namespace std;
    
bool duplicate(vector<int> nums) {
 
    unordered_set<int> set;
    
    for(int i = 0; i<nums.size();i++){
        set.insert(nums[i]);
    }
    
    if(set.size() < nums.size())
        return true;
    
    return false;
}
    
int main () {
	    
    vector<int> nums {1, 2, 3, 1};
    
    cout<<duplicate(nums);
    
}