#include <bits/stdc++.h>
using namespace std;

//This function would be responsible for hashing all data in both 
int hashString2(string str,char s){
    int arr[256] = {0};

}

//This hash function is for small case letters :
int hashString(string arr,char s){
    int arr2[26] = {0};
    for (int i = 0; i < arr.size(); i++)
    {
        arr2[arr[i]-'a']++;        
    }
    int count = s-'a';

    return arr2[count];
}

int main()
{
    string str;
    cin>>str;

    char s;
    cout<<"choose your letter :";
    cin >>s; 
    cout<<"difference is "<< s-'a'<<endl;
    cout<<"the answer is : "<<hashString(str,s)<<endl;

    return 0;
}