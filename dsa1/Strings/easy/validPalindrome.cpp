#include<bits/stdc++.h>
using namespace std;

bool validPalindrome(string s1){
    int low = 0;
    int high = s1.size()-1;
    while(low<high){
        if(s1[low]!=s1[high]){
            return false;
        }
        low++;
        high--;
    }    
    return true;
}


int main()
{
    string s1 = "naman";

    cout<<validPalindrome(s1);
    return 0;
}
