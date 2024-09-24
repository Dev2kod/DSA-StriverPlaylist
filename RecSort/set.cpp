#include<bits/stdc++.h>
using namespace std;

void sets(int x){

    set<int>st;

    st.insert(6512);
    st.insert(5616);
    st.insert(678);
    st.insert(457);
    st.insert(547);
    st.insert(563);
    st.insert(x);

    for(auto i = st.lower_bound(1); i != st.upper_bound(100000); i++){
        cout<<*(i)<<" ";
    }
};

int main(int argc, char const *argv[])
{
    void sets(int x);
    sets(23498);
    return 0;
}
