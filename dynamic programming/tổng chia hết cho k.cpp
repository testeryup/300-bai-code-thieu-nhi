#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubsetSumDivisibleByK(vector<int>& nums, int k) {
    vector<int> dp(k, INT_MIN);
    dp[0] = 0;

    for (int num : nums) {
        vector<int> temp(dp);
        for (int i = 0; i < k; ++i) {
            int newIndex = (temp[i] + num) % k;
            dp[newIndex] = max(dp[newIndex], temp[i] + num);
        }
    }

    return dp[0];
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << maxSubsetSumDivisibleByK(nums, k) << endl;
    return 0;
}

/*
Sử dụng phương pháp quy hoạch động để tìm dãy con có tổng chia hết cho k. Tạo mảng dp trong đó dp[j] lưu giá trị tổng lớn nhất mà khi chia cho k dư j.
*/
