#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
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
    std::set<int> s;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        s.insert(x);
    }

    auto it = s.begin();
    int prevNumb = *it;
    int res = 1e9;
    ++it;
    for(it; it != s.end(); ++it){
        if(*it - prevNumb < res){
            res = *it - prevNumb;
            
        } 
        prevNumb = *it;
    }
    cout << res;
    return 0;
}
