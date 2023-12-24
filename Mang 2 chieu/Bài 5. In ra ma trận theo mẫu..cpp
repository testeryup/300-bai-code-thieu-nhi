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
INPUT:
5
510 745 649 186 313 
474 22 168 18 787 
905 958 391 202 625 
477 414 314 824 334 
874 372 159 833 70
OUTPUT:
Pattern 1:
510 474 905 477 874 
745 22 958 414 372 
649 168 391 314 159 
186 18 202 824 833 
313 787 625 334 70 
Pattern 2:
70 833 159 372 874 
334 824 314 414 477 
625 202 391 958 905 
787 18 168 22 474 
313 186 649 745 510 
Pattern 3:
313 787 625 334 70 
186 18 202 824 833 
649 168 391 314 159 
745 22 958 414 372 
510 474 905 477 874 
Pattern 4:
313 186 649 745 510 
787 18 168 22 474 
625 202 391 958 905 
334 824 314 414 477 
70 833 159 372 874 
