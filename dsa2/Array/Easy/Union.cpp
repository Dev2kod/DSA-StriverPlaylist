#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    vector<int> Union;
    int i = 0, j = 0;

    // Merge both arrays
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        } else { // arr1[i] == arr2[j]
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements of arr1
    while (i < n) {
        if (Union.empty() || Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }

    // Add remaining elements of arr2
    while (j < m) {
        if (Union.empty() || Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }

    return Union;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12,12,44,55,66,77};
    int n = 10, m = 12;

    vector<int> result = findUnion(arr1, arr2, n, m);

    cout << "Union of arr1 and arr2 is:\n";
    for (int val : result) cout << val << " ";
    cout << endl;
    return 0;
}
