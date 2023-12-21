#include<iostream>
#include<string>
#include<sstream>
#include<ctype.h>
#include<algorithm>
#include<unordered_set>
#include<vector>
#include<set>


using namespace std;
bool isSymmetrical(const string &s){
    for(int i = 0; i < s.length()/2; ++i){
        if(s[i] != s[s.length() - i - 1]) return false;
    }
    return true;
}
int main(){
    string s; cin >> s;
    if (isSymmetrical(s))
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    
    return 0;
}
