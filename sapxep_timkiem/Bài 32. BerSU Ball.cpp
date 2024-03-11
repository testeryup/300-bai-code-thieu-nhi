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
    int n, m; cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, ans = 0;
    while(i < n && j < m){
        if(abs(a[i] - b[j]) <= 1){
            ++ans;
            ++i;
            ++j;
            continue;
        }
        if (a[i] < b[j])
        {
            ++i;
        }
        else{
            ++j;
        }
    }
    cout << ans;
    return 0;
}
