#include <bits/stdc++.h>
using namespace std;
void knapsack(const int &n, const int &k, vector<vector<int>> &dp, vector<pair<int, int>> &items){
    for(int i = 1; i <= k; ++i){
        for(int j = 1; j <= n; ++j){
            if (items[i - 1].first > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else{
                dp[i][j] = max(items[i - 1].second + dp[i - 1][j - items[i - 1].first], dp[i - 1][j]);
            }
        }
    }
}
int main() {
    int n, k; cin >> n >> k;
    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

    vector<pair<int, int>> items(k);

    for(auto &x : items){
        cin >> x.first >> x.second;
    }


    knapsack(n, k, dp, items);

    // for(auto &x : dp){
    //     for(auto &y : x){
    //         cout << y << ' ';
    //     }
    //     cout << endl;
    // }
    cout << dp[k][n];
    return 0;
}
