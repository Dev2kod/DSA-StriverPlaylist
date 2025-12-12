#include <bits/stdc++.h>
using namespace std;

// Merge two sorted halves into one sorted segment
void merge(vector<int>& arr, vector<int>& helper, int low, int mid, int high) {
    // Copy both halves into helper array
    for (int i = low; i <= high; i++) {
        helper[i] = arr[i];
    }

    int left = low;      // left half pointer
    int right = mid + 1; // right half pointer
    int current = low;   // current index in arr

    // Compare elements from left and right halves
    while (left <= mid && right <= high) {
        if (helper[left] <= helper[right]) {
            arr[current++] = helper[left++];
        } else {
            arr[current++] = helper[right++];
        }
    }

    // Copy remaining elements from left half (right half already in place)
    while (left <= mid) {
        arr[current++] = helper[left++];
    }
}

// Recursive merge sort
void mergesort(vector<int>& arr, vector<int>& helper, int low, int high) {
    if (low >= high) return; // base case

    int mid = (low + high) / 2;
    mergesort(arr, helper, low, mid);       // sort left half
    mergesort(arr, helper, mid + 1, high);  // sort right half
    merge(arr, helper, low, mid, high);     // merge halves
}

// Entry function
void sorte(vector<int>& arr) {
    vector<int> helper(arr.size()); // helper array of same size
    mergesort(arr, helper, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {10, 2, 34, 12, 54, 1, 99};
    sorte(arr);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
