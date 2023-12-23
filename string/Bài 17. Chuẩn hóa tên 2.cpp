#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<sstream>

using namespace std;
using ll = long long;

string normalizeName(string &name){

	for(int i = 0; i < name.size(); ++i){
		if(i == 0 || name[i - 1] == ' '){
			name[i] = toupper(name[i]);
		}
		else{
			name[i] = tolower(name[i]);
		}
	}

	for(int i = name.size() - 1; i >= 0; --i){
		if(name[i] == ' '){
			for(int j = i + 1; j < name.size(); ++j){
				name[j] = toupper(name[j]);
			}
			break;
		}
	}
	return name;
}
int main() {
	string name;
	getline(cin, name);
	string normalizedName = normalizeName(name);
	// cout << normalizedName;
	stringstream ss(name);
	string word;
	std::vector<string> v;
	while(ss >> word){
		v.push_back(word);
	}
	string res1, res2 = v[v.size() - 1] +",";
	for(int i = 0; i < v.size() - 1; ++i){
		res1 += v[i] + " ";
		res2 += " " + v[i];
	}
	res1[res1.size() - 1] = ',';
	res1 += " " + v[v.size() - 1];
	cout << res1 << '\n' << res2;

    return 0;
}
