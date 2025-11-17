#include<bits/stdc++.h>
using namespace std;

int check(string s, int l, int r){

    while(l>=0 && r<s.length() &&s[l]==s[r]){
        l--;
        r++;
    }

    return r-l-1;
}


string longestPal(string s){
int n = s.length();
int start=0;
int end = 0;
int maxlen=0;
for (int i = 0; i < n; i++) {
    int len1 = check(s, i, i);     // Odd length
    int len2 = check(s, i, i + 1); // Even length
    int len = max(len1, len2);

    if (len > maxlen) {
        maxlen = len;
        start = i - (len - 1) / 2; // correctly calculate start index
    }
}return s.substr(start,maxlen);
}


int main(){
    string s = "abababab";
    cout<<longestPal(s);
    return 0;
}