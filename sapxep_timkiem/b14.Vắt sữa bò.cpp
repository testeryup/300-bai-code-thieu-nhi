#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(auto &x : a) cin >> x;
    sort(a, a + n, greater<int>());
	long long total = 0;
	for (int i = 0; i < n; ++i)
	{
		total += max(a[i] - i, 0);
	}
	cout << total;
    return 0;
}
