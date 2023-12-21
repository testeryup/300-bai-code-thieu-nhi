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
    string s1, s2; cin >> s1; cin >> s2;
    string res1, res2;
    int cnt1[256] = {0}, cnt2[256] = {0};

    for(const char &x : s1){
        if(cnt1[x] == 0){
            ++cnt1[x];
        }
    }

    for(const char &x : s2){
        if(cnt2[x] == 0){
            ++cnt2[x];
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if(cnt1[i] != 0 || cnt2[i] != 0){
            res2.push_back((char) i);
        }
        if(cnt1[i] == 1 && cnt2[i] == 1)
            res1.push_back((char) i);
    }
    
    cout << res1 << '\n' << res2;
    return 0;
}
