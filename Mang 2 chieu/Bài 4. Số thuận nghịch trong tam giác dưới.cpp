#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<sstream>
#include<map>
#include<cmath>

using namespace std;
using ll = long long;
bool isThuanNghich(const string &n){
	int sz = n.size();
	for(int i = 0; i < sz/2; ++i){
		if(n[i] != n[sz - i - 1]) return false;
	}
	return true;
}

int main() {
	int n; cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];
		}
	}
	int count = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j <= i; ++j){
			string strInt = to_string(a[i][j]);
			if(strInt.size() < 2){
				cout << strInt << ' ';
				++count;
			}
			else if(isThuanNghich(strInt)){
				++count;
				cout << strInt << ' ';	
			} 
		}
	}
	cout << count;
    return 0;
}
