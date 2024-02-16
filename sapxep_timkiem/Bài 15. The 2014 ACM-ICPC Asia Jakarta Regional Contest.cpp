#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int a[n];
    for(auto &x : a) cin >> x;
    sort(a, a + n);
	int totalGroup = 1;
	for (int i = 1; i < n; ++i)
	{
		if(a[i] - a[i - 1] > k) ++totalGroup;
	}
	cout << totalGroup;
    return 0;
}
