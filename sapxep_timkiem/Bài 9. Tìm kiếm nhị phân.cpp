#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
#include <utility>

using namespace std;
using ll = long long;
bool binarySearch(vector<int> &a, int n, int x){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right)/2;
        if(a[mid] == x) return true;
        else if(a[mid] < x) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}
int main() {
    int n; cin >> n;
    std::vector<int> a(n);
    for(auto &x : a) cin >> x;
    int q; cin >> q;
    while(q--){
        int numb; cin >> numb;
        if (binarySearch(a, n, numb))
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
