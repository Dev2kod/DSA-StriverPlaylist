#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int rev=0;
    while(n>0){
        int count;
        count = n%10;
        rev =rev*10 + count;
        n=n/10;
    }
    cout<<rev;
    return 0;
}
