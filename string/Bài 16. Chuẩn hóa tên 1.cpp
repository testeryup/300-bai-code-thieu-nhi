#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<sstream>

using namespace std;
using ll = long long;

string normalizeDate(const string &date){
	stringstream ss(date);
	int day, month, year;
	char slash;
	ss >> day >> slash >> month >> slash >> year;
	stringstream normalized;
	normalized << setfill('0') << setw(2) << day << slash
               << setfill('0') << setw(2) << month << slash
               << setfill('4') << year;
    return normalized.str();
}
int main() {
    string name, date;
    getline(cin, name);
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    // cin.ignore();
    getline(cin, date);
    stringstream ssName(name), ssDate(date);

    string word;
    
    while(ssName >> word){
    	word[0] = toupper(word[0]);
    	cout << word << ' ';
    }
	cout << endl;

    cout << normalizeDate(date);
    
    return 0;
}
