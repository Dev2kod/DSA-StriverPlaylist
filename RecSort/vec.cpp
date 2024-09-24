#include<bits/stdc++.h> 
using namespace std;


int main()
{
    void vect();
    void vect() {
        vector<int> vec;
        vec.push_back(1);
        cout<<vec[0]<<endl;

        vector<int> num = {1,2,3,4,5,6,78,89,7};
    
        for (auto it = num.begin(); it != num.end();it++){
            cout<<*(it)<<" ";
        }
    };

    void sets(int x) {
        set<int>s1;
        s1.insert(1);
        s1.insert(6);
        s1.insert(5);
        s1.emplace(x);

        cout<<s1.begin;
    };

    sets(2);

    return 0;
}
