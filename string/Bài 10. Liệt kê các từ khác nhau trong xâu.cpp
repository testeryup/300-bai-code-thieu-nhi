#include<iostream>
#include<string>
#include<sstream>
#include<ctype.h>
#include<algorithm>
#include<unordered_set>
#include<vector>
#include<set>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    set<string> se;
    vector<string> resTt;
    while (ss >> word)
    {
        if(se.find(word) == se.end()){
            resTt.push_back(word);
            se.insert(word);
        }
    }
    
    for(const auto &x : se) cout << x << ' ';

    cout << endl;
    for(const auto &x : resTt) cout << x << ' ';
    return 0;
}
