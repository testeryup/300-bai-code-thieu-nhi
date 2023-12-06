#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>


using namespace std;
using ll = long long;
int tien[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

int isNotDecrease(int n){
    while(n >= 10){
        int r = n%10;
        int l = n/10%10;
        if(r < l ) return 0;
        n /= 10;
    }
    return 1;

}

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second){
        return a.second > b.second;
    } 
    return a.first > b.first;
}

int main(){
    map<int, int> mp;

    int n;
    while(cin >> n){
        if(isNotDecrease(n)){
            mp[n]++;
        }
    }

    vector<pair<int, int>> vt;
    for(auto &it : mp){
        vt.push_back(it);
    }
    sort(vt.begin(), vt.end(), cmp);

    for(auto &it : vt){
        cout << it.first << ' ' << it.second << endl;
    }
    return 0;
}
