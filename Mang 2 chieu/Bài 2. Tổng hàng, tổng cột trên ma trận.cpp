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



int isPrime(int n){
	if(n <= 1) return 0;
	if(n == 2 || n == 3) return 1;
	for(int i = 2; i <= sqrt(n); ++i){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int n,m; cin >> n >> m;
	int a[n][m];
	int sumR[n] = {0}, sumC[m] = {0};
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
			sumR[i] += a[i][j];
			sumC[j] += a[i][j];
		}
	}

	for(const int &x : sumR) cout << x << ' ';
	cout << endl;
	for(const int &x : sumC) cout << x << ' ';
    return 0;
}
