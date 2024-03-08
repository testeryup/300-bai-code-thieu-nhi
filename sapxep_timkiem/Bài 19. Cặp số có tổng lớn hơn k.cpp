#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    ll res = 0;
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; ++i)
    {
        vector<int>::iterator r = upper_bound(a.begin() + i + 1, a.end(), k - a[i]);
        res += a.end() - r;
        
    }
    cout << res;
    return 0;
}
