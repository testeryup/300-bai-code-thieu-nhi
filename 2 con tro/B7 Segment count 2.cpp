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
    while(r < n){
        while(sum < s && r < n){
            sum += a[r++]; 
        }
        while(sum >= s){
            ans += n - r + 1; // +1 boi vi luc nay r dang lon hon gia tri nho nhat cua tong(l, r) >= s 1 don vi
            sum -= a[l++];
        }
    }
    cout << ans;
    return 0;
}
