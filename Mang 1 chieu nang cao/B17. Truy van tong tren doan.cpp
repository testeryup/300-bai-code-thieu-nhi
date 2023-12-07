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
    int a[n];
    for(int &x : a) cin >> x;

    int prefix[n];
    prefix[0] = a[0];
    // cout << prefix[0] << endl;
    for(int i = 1; i < n; ++i){
        prefix[i] = a[i] + prefix[i-1];
    }
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        --l; --r;
        if(l == 0) {
            cout << prefix[r] << endl;
            continue;
        }
        cout << prefix[r] - prefix[l-1] << endl;

    }
    return 0;
}
