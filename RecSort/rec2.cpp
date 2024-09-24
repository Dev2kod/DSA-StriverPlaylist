#include<bits/stdc++.h>
using namespace std;

void recsum(int x , int sum){
    if(x<1){
        cout<<x<<endl;
        return;
     }
    recsum(x-1,sum+x);
    cout<<sum<<" ";
}

int sumof(int n){
    if (n==0){
        return 0;
    }
    
    return n+sumof(n-1);    
}

  int main()
{
    int sumof(int x);
   cout<< sumof(100);
    return 0;
}
