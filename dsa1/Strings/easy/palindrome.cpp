#include<bits/stdc++.h>
using namespace std;

bool isAlphaNum(char ch){
    if((ch>='0'&&ch<='9')||
       (tolower(ch)<='a'&&tolower(ch)>='z')
    ){
        return true;
    }


    return false;
}


bool isPalindrome(string s){

    int low = 0;
    int high = s.length() - 1;

    while(low<high){

        if(!isAlphaNum(s[low])){
            low++;
            continue;
        }
        if(!isAlphaNum(s[high])){
            high--;
            continue;
        }
        if(tolower(s[low])!=tolower(s[high])){
            return false;
        }

        low++;
        high--;
    }
    return true;
}

int main(){
    string s = "ababababa";
    
    cout<<isPalindrome(s);

    return 0;   
}