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
    pair<char, int> minPair = {'0', 1e9}, maxPair = {'0', 0};
    for(int i = 0;  i < 256; ++i){
        if(cnt[i]){
            if(minPair.second >= cnt[i]){
                minPair.first = (char) i;
                minPair.second = cnt[i];
            }
            if(maxPair.second <= cnt[i]){
                maxPair.first = (char) i;
                maxPair.second = cnt[i];
            }
        }
    }
    
    cout << maxPair.first << ' ' << maxPair.second << endl;
    cout << minPair.first << ' ' << minPair.second << endl;

    return 0;
}
