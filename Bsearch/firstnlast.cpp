#include<bits/stdc++.h>
using namespace std;

int findFirst(vector<int>& arr, int target) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1; // Continue searching on the left side
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
        if (low > high && result == -1) {
            break; // Break the loop if target is not found
        }
    }
    return result;
}

int findLast(vector<int>& arr, int target) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1; // Continue searching on the right side
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
        if (low > high && result == -1) {
            break; // Break the loop if target is not found
        }
    }
    return result;
}

void searchRange(vector<int>& arr, int target) {
    int first = findFirst(arr, target);
    int last = findLast(arr, target);
    if (first == -1 || last == -1) {
        cout << "Target not found in the array";
    } else {
        cout << first << " " << last;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 3, 5, 8, 8, 8, 9, 11, 14};
    int target = 8;
    searchRange(arr, target);
    return 0;
}