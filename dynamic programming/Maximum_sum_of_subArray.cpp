#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int maximumSumOfSubArray(const int& n, vector<int>& a, vector<int>& maxSum) {

    maxSum[0] = a[0];
    for (int i = 1; i < n; ++i) {
        maxSum[i] = max(a[i], a[i] + maxSum[i - 1]);
    }
    return *max_element(maxSum.begin(), maxSum.end());
}

int maxSubArray(const std::vector<int>& nums) {
    if (nums.empty()) return 0;

    int max_current = nums[0];
    int max_global = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        max_current = std::max(nums[i], max_current + nums[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }

    return max_global;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    vector<int> maxSum(n, INT_MIN);
    cout << maximumSumOfSubArray(n, a, maxSum) << endl;

    for (auto& x : maxSum) cout << x << ' ';
    cout << endl;
    cout << maxSubArray(a);
    return 0;
}
