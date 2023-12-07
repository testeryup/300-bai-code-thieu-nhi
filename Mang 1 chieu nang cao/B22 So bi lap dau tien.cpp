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

int main(){
    int n; cin >> n;
    int a[n];
    for(const int &x : a) cin >> x;
    // bool isLooped = false;
    unordered_map<int, int> mp;
    for(const int &x : a){
        mp[x]++;
        if(mp[x] > 1){
            cout << x;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
