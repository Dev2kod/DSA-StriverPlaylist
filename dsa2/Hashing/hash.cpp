#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 5, 6, 7};

    int hash[10] = {0};

    for (int i = 0; i < 8; i++)
    {
        hash[arr[i]] += 1;
    }

    cout << hash[2];

    return 0;
}