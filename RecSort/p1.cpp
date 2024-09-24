 #include<iostream>
 using namespace std;
 
 int main()
 {
    int i,j,n;
    cin>>n;
    for(i = 1 ;i<=n;i+=2){
        for(j=1;j<=i;j++){
            cout<<i;
            i--;
        }
        cout<< endl;
    }

    return 0;
 }
 