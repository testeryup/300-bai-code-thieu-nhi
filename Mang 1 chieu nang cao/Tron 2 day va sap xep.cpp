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
    int a[n], b[n];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    sort(a, a + n);
    sort(b, b + n, cmp);
    vector<int> v(2 * n);
    for(int i=0; i<2*n; i++) {
        if(i%2 == 0) v[i] = a[i/2];
        else v[i] = b[i/2];
    }

    for(int i=0; i<2*n; i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
