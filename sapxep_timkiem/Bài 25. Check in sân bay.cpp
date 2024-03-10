#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>

using namespace std;
using ll = long long;
int cmp(const pair<int, int> &a, const pair<int, int> &b){
    return a.first < b.first;
}
int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int sum = 0;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    
    
    for (int i = 0; i < n; ++i)
    {
        sum = max(sum, a[i].first) + a[i].second;
    }
    
    cout << sum;
    return 0;
}
