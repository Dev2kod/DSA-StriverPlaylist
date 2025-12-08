#include<bits/stdc++.h>
using namespace std;

//reverse a string
void rev(string &name,int i, int j){
    if(i>j){
        return;
    }
    swap(name[i],name[j]);
    rev(name,i+1,j-1);
}

//String palindrome check
bool palindrome(string &name){
    string a = name;
    rev(name,0,name.size()-1);

    if(a==name){
        return true;
    }
    else return false;
}


// Fibonacci Series with recurison
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}


int main(){

    cout<<fib(5);
    return 0;
}