#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<sstream>

using namespace std;
using ll = long long;

string getEmailName(const string &name){
	string result;
	int index = name.rfind(' ');
	result = name.substr(index + 1) + name[0];
	for(int i = 1; i < index; ++i){
		if(name[i - 1] == ' '){
			result += name[i];
		}
	}
	result += "@xyz.edu.vn";
	return result;
}

string getPassWord(const string &date){
	string result;
	char slash;
	stringstream ss(date);
	int day, month, year;
	ss >> day >> slash >> month >> slash >>year;
	// cout << day << month << year;

	result += to_string(day) + to_string(month) + to_string(year);
	return result; 
}
int main() {
	int n; cin >> n;
	cin.ignore();
	while(n--){
		string raw;
		getline(cin, raw);
		transform(raw.begin(), raw.end(), raw.begin(), ::tolower);
		int lastSpace = raw.rfind(' ');
		string name = raw.substr(0, lastSpace);
		string date = raw.substr(lastSpace + 1);
		// cout << name << ' ' << date << endl;
		cout << getEmailName(name) << endl;
		cout << getPassWord(date) << endl;
	}
	

    return 0;
}
