#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool isThuanNghich(const string &s){
	int n = s.length();
	for(int i = 0; i < n/2; ++i){
		if (s[i] != s[n - i - 1])
		{
			return false;
		}
	}
	return true;
}

bool cmp(const string &a, const string &b) {
    if (a.length() == b.length()) {
        return false;
    }
    return a.length() < b.length();
}
int main() {
    string s;
    std::vector<string> v;
    while(cin >> s){
    	v.push_back(s);
    }

    sort(v.begin(), v.end(), cmp);
	for(const string &x : v){
		if (isThuanNghich(x))
		{
			cout << x << ' ';
		}
	}
	
    return 0;
}
