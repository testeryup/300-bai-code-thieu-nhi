#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int res = 0;
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; ++i)
    {
        auto r = lower_bound(a.begin() + i + 1, a.end(), k - a[i]);
        --r;
        res += r - (a.begin() + i);
        
    }
    cout << res;
    return 0;
}
