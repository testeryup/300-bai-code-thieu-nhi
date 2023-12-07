#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cmath>
#include<sstream>
#include<unordered_map>

using namespace std;
using ll = long long;

int d[1000005] = {0};

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
        d[x]++;
    }

    ll cnt = 0;

    for(int val = 0; val <= 1e6; ++val){
        cnt += 1ll * d[val] * (d[val] - 1) / 2;
    }
    cout << cnt;
    return 0;
}
