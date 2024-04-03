#include<iostream>
#include<algorithm>
#include<iomanip>
#include<map>

using namespace std;

using ll = long long;

int main(int argc, char const *argv[])
{
    int n, x; cin >> n >> x;
    int a[n], tong = 0, ans = 0;
    for(auto &x : a) cin >> x;

    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        tong += a[i];
        if(tong == x) ++ans;
        if(mp.count(tong - x)) ++ans;
        mp[tong] = 1;
    }
    cout << ans;
    return 0;
}
