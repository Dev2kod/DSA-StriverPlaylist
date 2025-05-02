#include<bits/stdc++.h>
using namespace std;

int depth(string s){
    int maxi=0;
    int d=0;
    int n = s.length();

    for(int i=0;i<n;i++){
        if(s[i]=='('){
            d++;
            if(d>maxi){
                maxi=d;
            }
        }
        if(s[i]==')'){
            d--;
        }    }

    return maxi;
}

int main(){
    string s = "(()(()))";

    cout<<depth(s);

    return 0;
}