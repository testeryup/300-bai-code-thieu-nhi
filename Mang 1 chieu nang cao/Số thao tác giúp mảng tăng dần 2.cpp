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
    int n, d; cin >> n >> d;
    int a[n];
    for(int &x : a) cin >> x;
    int ans = 0;
    for(int i = 1; i < n; ++i){
        while(a[i] < a[i - 1]){
            a[i] += d;
            ++ans;
        }
    }
    cout << ans;
    return 0;
}
