#include <bits/stdc++.h>
using namespace std;

int countPairs(int arr[], int n) {
    unordered_map<int, int> freq;
    // Finding frequency of each number.
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;
    // Calculating pairs of each value.
    int ans = 0;
    for (auto it : freq) {
        int count = it.second;
        ans += count * (count - 1) / 2;
    }
    return ans;
}

int main() {
    int arr[] = {2, 2, 1, 3, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countPairs(arr, n) << endl;
    return 0;
}
