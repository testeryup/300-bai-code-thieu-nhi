#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoins(int x) {
    vector<int> coins = {1, 3, 4};
    vector<int> dp(x + 1, INT_MAX);
    dp[0] = 0;
    
    for (int i = 1; i <= x; ++i) {
        for (int coin : coins) {
            if (i >= coin && dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    
    return dp[x];
}

int main() {
    int x;
    cin >> x;
    cout << minCoins(x) << endl;
    return 0;
}
