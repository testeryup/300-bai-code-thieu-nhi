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
	int n,m; cin >> n >> m;
	int a[n][m];
	int minV = 1e9, maxV = 0;
	std::vector<pair<int, int>> minPos, maxPos;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];

			if (a[i][j] == minV)
			{
				minPos.push_back({i + 1, j + 1});
			}
			else if(a[i][j] < minV){
				minV = a[i][j];
				minPos.clear();
				minPos.push_back({i + 1, j + 1});
			}
			if(a[i][j] == maxV){
				maxPos.push_back({i + 1, j + 1});
			}
			else if(a[i][j] > maxV){
				maxV = a[i][j];
				maxPos.clear();
				maxPos.push_back({i + 1, j + 1});
			}
		}
	}

	cout << minV << endl;
	for(auto &x : minPos){
		cout << x.first << ' ' << x.second << endl;
	}
	cout << maxV << endl;
	for(auto &x : maxPos){
		cout << x.first << ' ' << x.second << endl;
	}
    return 0;
}
