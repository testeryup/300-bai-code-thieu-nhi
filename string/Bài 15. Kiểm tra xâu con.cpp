#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s, t;
    cin >> s;
    cin >> t;
    if (s.find(t) != string::npos)
    {
    	cout << "YES";
    	return 0;
    }
    cout << "NO";
    return 0;
}
