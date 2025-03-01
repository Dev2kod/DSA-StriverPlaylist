#include<bits/stdc++.h>
using namespace std;


void printDuplicate(string str){
    unordered_map<char,int> count;

    for(char ch: str){
        count[ch]++;
    }

    for (auto& pair: count )
    {
        if(pair.second>1){
            cout<< pair.first<<", ";
        }
    }
}

int main(){
    string str = "deveshdev";
    printDuplicate(str);

    return 0;
}