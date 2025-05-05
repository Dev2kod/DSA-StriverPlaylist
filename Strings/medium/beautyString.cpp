#include <bits/stdc++.h>
using namespace std;

int beautySum(string s) {
    int result = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        vector<int> freq(26, 0); 
        for (int j = i; j < n; j++) {
            freq[s[j] - 'a']++;

            int maxFreq = 0, minFreq = INT_MAX;

            for (int k = 0; k < 26; k++) {
                if (freq[k] > 0) {
                    maxFreq = max(maxFreq, freq[k]);
                    minFreq = min(minFreq, freq[k]);
                }
            }

            result += (maxFreq - minFreq);
        }
    }

    return result;
}

int main() {
    string s = "paachi";
    cout << "Total beauty of string: " << beautySum(s) << endl;
    return 0;
}
