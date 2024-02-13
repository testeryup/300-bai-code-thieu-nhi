#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	for(auto &x : a) cin >> x;

	for(auto &x : b) cin >> x;
	
	int i = 0, j = 0, count = 0;
;

	while(i < n && j < m){
		if(a[i] >= b[j]){
			++count;
			++i;
			++j;
		}
		else{
			++i;
		}
	}
	cout << count << endl;
	return 0;
}
