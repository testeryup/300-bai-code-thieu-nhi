#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

int sizeOfInt(const int &n){
    string intStr = to_string(n);
    int count = 0;
    for(const auto &x : intStr){
        count += x - '0';
    }
    return count;
}


int cmp(const int &a, const int &b){
    return sizeOfInt(a) < sizeOfInt(b);
}



int main() {
    int n; cin >> n;
    std::vector<int> v(n);
    for(auto &x : v) cin >> x;

    sort(v.begin(), v.end(), cmp);
    
    for(auto &x : v) cout << x << ' ';
    return 0;
}
