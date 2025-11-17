#include<bits/stdc++.h>
using namespace std;

int facto(int n){
    int fact = 1;
    if(n<=1){
        return fact;
    }
    fact = n * facto(n-1);
}

int main(int argc, char const *argv[])
{
    cout<<facto(3);
    return 0;
}
