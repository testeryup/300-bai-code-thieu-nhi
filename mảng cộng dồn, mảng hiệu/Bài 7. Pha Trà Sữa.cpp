#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int a[200001];
int d[200001];
int pre[2000001];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k, q; cin >> n >> k >> q;
	
	int maxR = 1;

	while(n--){
		int l, r;
		cin >> l >> r;
		d[l] += 1;
		d[r+1] -= 1;
		if(r > maxR) maxR = r;
	}

	a[1] = d[1];
	for(int i = 1; i <= maxR; ++i){
		a[i] = a[i-1] + d[i];
	}


	while(q--){
		int l, r, count = 0;
		cin >> l >> r;
		for(int i = l; i <= r; ++i){
			if(k <= a[i]) ++count;
		}
		cout << count << endl;
	}

}
