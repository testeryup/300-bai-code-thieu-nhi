#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int longestIncreasingSequence(vector<int>& a) {
	vector<int> LIS(a.size(), 1);
	for (int i = 1; i < a.size(); ++i) {
		for (int j = 0; j < i; ++j) {
			if (a[i] > a[j] && LIS[i] < LIS[j] + 1)
			{
				LIS[i] = LIS[j] + 1;
			}
		}
	}
	return *max_element(LIS.begin(), LIS.end());
}
int main() {
	int n; cin >> n;
	vector<int> a(n);
	for (auto& x : a) cin >> x;
	cout << longestIncreasingSequence(a);
	return 0;
}
