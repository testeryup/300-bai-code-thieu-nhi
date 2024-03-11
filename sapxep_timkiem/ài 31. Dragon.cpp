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
    int n, s; cin >> n >> s;
    vector<pair<int, int>> v(n);
    for(auto &x : v) cin >> x.first >> x.second;

    sort(v.begin(), v.end());

    for(auto &x : v){
        if (s <= x.first)
        {
            cout << "NO";
            return 0;
        }
        s += x.second;
    }
    cout << "YES";
    return 0;
}
