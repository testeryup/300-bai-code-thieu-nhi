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
    int l = 0, r = 0, ans = 0;
    for(r; r < N; ++r){
        sum += a[r];
        while(sum > S){
            sum -= a[l];
            ++l;
        }
        ans = r - l + 1;
    }
    cout << ans;
    return 0;
}
