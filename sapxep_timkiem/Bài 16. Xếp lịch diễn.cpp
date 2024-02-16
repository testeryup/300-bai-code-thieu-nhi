#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int cmp(const pair<int, int> &a, const pair<int, int> &b){
	return a.second < b.second;
}
int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int cnt = 1;
    int lastEnd = v[0].second;
    for(int i = 1; i < n; ++i){
    	if(v[i].first > lastEnd){
    		++cnt;
    		lastEnd = v[i].second;
    	}
    }
    cout << cnt;
    return 0;
}
