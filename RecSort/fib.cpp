#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t1,t2,t;
    t1 = 0;
    t2 = 1;
    for(int i =1;i<10;i++){
        cout<<t1<<endl;
        
        t = t1 + t2;
        t1 = t2;
        t2 = t;
        

    }
    return 0;
}
