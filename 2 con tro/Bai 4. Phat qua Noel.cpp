#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
using ll = long long;

int main(){
    int n, s; 
    cin >> n >> s;

    int a[n];
    for(int &x : a) cin >> x;

    int l = 0, r = 0, sum = 0, ans = 0;
    for(r; r < n; ++r){
        sum += a[r];
        while(sum > s){
            sum -= a[l];
            ++l;            
        }
        ans = max(r - l + 1, ans);
        
    }
    cout << ans;
    return 0;
}
