#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void findMinDifference(vector<int>& candies) {
    int total = accumulate(candies.begin(), candies.end(), 0);
    int n = candies.size();
    int target = total / 2;
    vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));
    dp[0][0] = true;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= target; ++j) {
            if (j >= candies[i-1]) {
                dp[i][j] = dp[i-1][j] || dp[i-1][j-candies[i-1]];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    int best = 0;
    for (int j = target; j >= 0; --j) {
        if (dp[n][j]) {
            best = j;
            break;
        }
    }

    vector<int> group1, group2;
    for (int i = n, j = best; i > 0; --i) {
        if (j >= candies[i-1] && dp[i-1][j-candies[i-1]]) {
            group1.push_back(candies[i-1]);
            j -= candies[i-1];
        } else {
            group2.push_back(candies[i-1]);
        }
    }

    for (int candy : group1) {
        cout << candy << " ";
    }
    cout << endl;
    for (int candy : group2) {
        cout << candy << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> candies(n);
    for (int i = 0; i < n; ++i) {
        cin >> candies[i];
    }
    findMinDifference(candies);
    return 0;
}
/*
  Sử dụng phương pháp quy hoạch động để chia các gói kẹo thành hai nhóm sao cho số kẹo giữa hai nhóm chênh lệch nhau ít nhất. Tạo mảng dp trong đó dp[j] là true nếu có thể đạt được tổng trọng lượng j với các gói kẹo hiện tại.
*/
