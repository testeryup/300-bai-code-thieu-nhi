#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<sstream>
#include<map>

using namespace std;
using ll = long long;

int main() {
	string raw; getline(cin, raw);
	string py = "python";
	int tempIndex = 0;
	for(const auto &x : py){
		if(raw.find(x, tempIndex) != string::npos){
			tempIndex = raw.find(x, tempIndex);
			continue;
		}
		else{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
    return 0;
}
