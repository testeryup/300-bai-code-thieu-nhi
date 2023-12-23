#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s; getline(cin, s);
    map<string, int> mp;
    stringstream ss(s);
    string word;
    while(ss >> word){
    	mp[word]++;
    }

	for(const auto &x : mp){
		cout << x.first << ' ' << x.second << endl;
	}
	cout << endl;
	stringstream iss(s);
	while(iss >> word){
		if(mp[word]){
			cout << word << ' ' << mp[word] << endl;
			mp.erase(word);
		}
	}
    return 0;
}
