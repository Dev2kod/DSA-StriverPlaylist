#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 5;
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <n-i; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}
