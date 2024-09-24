#include<bits/stdc++.h>
using namespace std;

void print1(int y,int x){
    if(y<=x){
    cout<<y<<endl;}
    print1(y+1,x);
};

void print2(string x,int e){
    int count =0;
    if(count <=e){
        cout<<x<<endl;
    }
    print2(x,e-1);
};

void revprint(int y, int x){
    if(x>y){
        return;
    }
    cout<<x<<endl;
    revprint(y,x-1);
    cout<<x<<" ";
};

void btrack(int y,int x){
    if(x<y){
        return;
    }
    btrack(y,x-1);
    cout<<x<<" "; 
};

int main(int argc, char const *argv[])
{
    void print2(string y,int x);
    void btrack(int y,int x);

    btrack(1,10); 
    return 0;
}
