#include<bits/stdc++.h>
using namespace std;

void arrayhash()
{
    string s;
    cin>>s;
    
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    
    int q ;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
};

void maphash(){

}

int main(){

    cout<<"give size of array "<<endl;
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" Elements for array";
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
        mpp[arr[i]]++;     
    }
    
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    cout<<"how many numbers do you want to map? : ";
    int q;
    cin>> q;
    cout<<" Enter the numbers /n";
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }


    return 0;
}
