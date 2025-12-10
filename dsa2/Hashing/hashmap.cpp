#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter your string :";
    string str;
    cin>>str;

    map<char, int> mpp;
    for (int i = 0; i < str.size(); i++)
    {
        mpp[str[i]]++;
    }

        char letter;
        cout<<"enter letter : ";
        cin >> letter;
        // fetch:
        cout << mpp[letter] << endl;
    return 0;
}