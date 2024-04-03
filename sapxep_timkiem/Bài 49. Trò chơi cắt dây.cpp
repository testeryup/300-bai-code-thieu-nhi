#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

using ll = long long;
bool check(int a[], int n, int k, double len){
    ll count = 0;
    for (int i = 0; i < n; ++i)
    {
        count += (1ll * a[i]) / len;
    }
    return count >= k;
}
int main(int argc, char const *argv[])
{
    int n, k; cin >> n >> k;
    int a[n];
    for(auto &x : a) cin >> x;

    double left = 0, right = 9e18, ans = -1;

    for (int i = 1; i <= 100; ++i)
    {
        double mid = (left + right) / 2;
        if(check(a, n, k, mid)){
            ans = mid;
            left = mid;
        }
        else{
            right = mid;
        }
    }
    
    cout << fixed << setprecision(6) << ans << endl;
    return 0;
}
