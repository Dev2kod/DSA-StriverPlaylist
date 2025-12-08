#include<bits/stdc++.h>
using namespace std;

//print string n times
void printname(string s,int n){
    if(n>0){
        cout<<s<<endl;
    }
    else{
        return;
    }
    printname(s,n-1);
}


//print next numbers till 10
void printto10(int n){
if(n>10){
    return;
}
printto10(n+1);
cout<<n;
}

//print n to 1
void printto1(int n){
    if(n<1){
        return;
    }
    cout<<n<<endl;
    printto1(n-1);
}

//backtracking- n to 1
void backtrack1(int i,int n){
    if(n<i){
        return;
    }
    backtrack1(i+1,n);
    cout<<i<<endl;
}

int main(){
    int a = 0;
    backtrack1(1,12);
    return 0;
}