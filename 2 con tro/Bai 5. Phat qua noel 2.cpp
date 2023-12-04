#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
using ll = long long;

int main(){
    int N, S; cin >> N >> S;
    int a[N];
    for(int &x : a) cin >> x;

    int sum = 0; 
    int l = 0, r , ans = 1e9;
    for(r = 0; r < N; ++r){
        sum += a[r];
        while(sum >= S){
            ans = min(ans, r - l + 1);
            sum -= a[l]; ++l;

        }
    }
    cout << ans;
    return 0;
}
