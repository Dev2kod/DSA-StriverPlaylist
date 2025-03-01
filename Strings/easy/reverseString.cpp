#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str1="messi";
    int start = 0;
    int end = strlen(str1)-1;
    cout<< str1 <<endl;
    while (start<end){
        swap(str1[start],str1[end]);
        start++;
        end--;
    }  
    cout<<str1;

    return 0;
}