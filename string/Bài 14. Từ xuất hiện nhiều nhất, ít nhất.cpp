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

	pair<string, int> min = {"", 100001}, max = {"", 0};
	for(auto it = mp.rbegin(); it != mp.rend(); ++it){
		if(it->second < min.second){
			min.first = it->first;
			min.second = it->second;
		}

		if(it->second > max.second){
			max.first = it->first;
			max.second = it->second;
		}
	}

	
	cout << max.first << ' ' << max.second << endl;
	cout << min.first << ' ' << min.second << endl;
    return 0;
}
