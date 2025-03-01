#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void countCase(string &ch){
    int num = ch.size();
    int small=0;
    int big = 0;
    for (int i = 0; i < num; i++) {
        if (islower(ch[i])) { // Corrected function call
            small++;
        }
        if (isupper(ch[i])) { // Corrected function call
            big++;
        }
    
    }
    cout << "Uppercase letters: " << big << endl;
    cout << "Lowercase letters: " << small << endl;
    
}

int main(){
string ch = "CHhatrapati SHivaji MAHARAJ";
countCase(ch);

return 0;
}