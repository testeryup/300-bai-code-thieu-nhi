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

int main() {
	int n; cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];
		}
	}
	cout << "Pattern 1:" << endl;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[j][i] << ' ';
		}
		cout << endl;
	}

	cout << "Pattern 2:" << endl;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[n - i - 1][n - j - 1] << ' ';
		}
		cout << endl;
	}

	cout << "Pattern 3:" << endl;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[j][n - i - 1] << ' ';
		}
		cout << endl;
	}

	cout << "Pattern 4:" << endl;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[i][n - j - 1] << ' ';
		}
		cout << endl;
	}
    return 0;
}
