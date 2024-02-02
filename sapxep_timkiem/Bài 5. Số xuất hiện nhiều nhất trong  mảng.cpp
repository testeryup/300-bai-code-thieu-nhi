#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
#include <utility>

using namespace std;
using ll = long long;




int main() {
    int n; cin >> n;
    std::vector<int> v(n);
    for(auto &x : v) cin >> x;

    sort(v.begin(), v.end());
    
    int max_freq = 1;
    int min_numb = v[0];
    pair<int, int> res(v[0], 1);

    for(int i = 1; i < n; ++i){
        if(v[i] == v[i - 1]){
            ++max_freq;
        }
        else{
            if(max_freq > res.second){
                res.first = v[i - 1];
                res.second = max_freq;
            }
            max_freq = 1;
        }
    }
    cout << res.first << ' ' << res.second;
    return 0;
}
