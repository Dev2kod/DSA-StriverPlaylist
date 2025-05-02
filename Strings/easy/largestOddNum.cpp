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


string largestOdd(string s){
    int high = s.length() - 1;

    while(high>=0){
        if((s[high] - '0')%2==1){
            return s.substr(0,high+1);
        }
        else{
            high--;
        }
    }
    return "";
}

int main(){
    string s = "20748";
    
    cout<<"Largest odd number is " <<largestOdd(s);

    return 0;   
}