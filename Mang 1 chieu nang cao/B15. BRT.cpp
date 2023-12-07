#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cmath>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    map<int, int> mp;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    

    sort(a.begin(), a.end());

    // int min = 0;

    for(int i = 0; i < n - 1; ++i){
        mp[abs(a[i] - a[i + 1])]++;
    }
    cout << mp.begin()->first << ' ' << mp.begin()->second;
    return 0;
}
