#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main()
{
    int n, x; cin >> n >> x;
    std::vector<int> v(n);
    for(auto &x : v) cin >> x;

    sort(v.begin(), v.end());

    for(auto &x : v) cout << x << ' ';

    cout << endl;

    for (int i = 0; i < n; ++i)
    {
        auto l = lower_bound(v.begin() + i + 1, v.end(), v[i] + x);
        // cout << "test : v[i] = " << v[i] << ' '<< v[i] + x << ' ' <<*l << endl;
        if (l != v.end() && *l == (v[i] + x))
        {
            cout << 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
