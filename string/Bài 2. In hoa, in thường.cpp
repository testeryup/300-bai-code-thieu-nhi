#include<iostream>
#include<string>
#include<sstream>
#include<ctype.h>
#include<algorithm>

using namespace std;

int main(){
    string s;
    getline(cin , s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}
