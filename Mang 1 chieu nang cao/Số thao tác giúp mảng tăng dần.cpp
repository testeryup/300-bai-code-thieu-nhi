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
bool cmp(const int &a, const int &b){
    return a > b;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int ans = 0;
    for(int i = 1; i < n; ++i){
        if(a[i] < a[i - 1]){
            int d = a[i - 1] + 1 - a[i];
            ans += d;
            a[i] = a[i-1] + 1;
        }
    }
    cout << ans;
    return 0;
}
