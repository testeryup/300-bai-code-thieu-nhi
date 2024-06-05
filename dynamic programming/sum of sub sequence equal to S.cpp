#include <iostream>
#include <vector>
using namespace std;

bool subsetSum(vector<int>& nums, int S) {
    vector<bool> dp(S + 1, false);
    dp[0] = true;

    for (int num : nums) {
        for (int j = S; j >= num; --j) {
            dp[j] = dp[j] || dp[j - num];
        }
    }

    return dp[S];
}

int main() {
    int n, S;
    cin >> n >> S;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    if (subsetSum(nums, S)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

/*
    Sử dụng phương pháp quy hoạch động để kiểm tra xem có dãy con nào có tổng bằng S hay không. Sử dụng mảng dp trong đó dp[j] là true nếu có dãy con có tổng bằng j.
*/
