#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
    }

    sort(a.begin(), a.end(), greater<int>());
    ll res = a[0];
    for(int i = 1; i < n; ++i){
        if(i <= k) res += a[i];
        else res -= a[i];
    }

    cout << res;
    return 0;
}
