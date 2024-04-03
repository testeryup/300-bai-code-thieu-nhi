#include<iostream>
#include<algorithm>
using namespace std;

using ll = long long;
bool check(ll a, ll b, ll n, ll sum){
    ll row = sum / a, column = sum / b;
    cout << sum << ' ' << row << ' ' << column << endl;
    return (row * column) >= n;
}
int main(int argc, char const *argv[])
{
    ll a, b, n; cin >> a >> b >> n;
    ll left = 0, right = max(a, b) * n, ans = -1;
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        ll x = mid / a, y = mid / b;
        if (check(a, b, n, mid))
        {
            // cout << 'a' << mid << ' ' << x << ' ' << y << endl;
            
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
