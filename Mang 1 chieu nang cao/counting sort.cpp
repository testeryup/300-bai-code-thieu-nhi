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
    int d[3] = {0};
    for(int &x : a){
        cin >> x;
        d[x]++;
    }


    for(int val = 0; val <= 2; ++val){
        for(int i = 0; i < d[val]; ++i){
            cout << val << ' ';
        }
    }
    
    return 0;
}
