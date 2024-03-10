#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main()
{
    int n; cin >> n;
    std::vector<int> v(n);
    for(auto &x : v) cin >> x;
    vector<int> a(v.begin(), v.end());
    sort(a.begin(), a.end());
    

    int max = a[n-1];
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == max)
        {
            cout << '_' << ' ';
        }
        else{
            auto it = upper_bound(a.begin(), a.end(), v[i]);
            if (it != a.end())
            {
                cout << *it << ' ';
            }
        }
    }
    // cout << -1;
    return 0;
}
