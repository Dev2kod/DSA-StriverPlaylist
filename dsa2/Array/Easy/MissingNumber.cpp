#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr)
{
    int n = arr.size();
    int max = (n + 2) * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return max - sum;
}

int main()
{
    vector<int> arr = {1, 2, 3, 5};

    int num = missingNumber(arr);
    cout << num;
    return 0;
}