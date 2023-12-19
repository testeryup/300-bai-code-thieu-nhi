#include<iostream>
#include<string>
#include<sstream>
#include<ctype.h>
#include<algorithm>

using namespace std;

int main(){
    string s;
    getline(cin , s);
    int cnt[256] = {0};
    for(auto &x : s){
        cnt[x]++;
    }
    for(int i = 0;  i < 256; ++i){
        if(cnt[i]){
            cout << (char)i << ' ' << cnt[i] << endl;
        }
    }
    cout << endl;

    for(const auto &x : s){
        if(cnt[x]){
            cout << x << ' ' << cnt[x] << endl;
            cnt[x] = 0;
        }
    }
    return 0;
}
