#include <bits/stdc++.h>
using namespace std;
int a[100], n;

void init(){
    for(int i = 0; i < n; ++i){
        a[i] = i + 1;
    }
}
int main(){
    cin >> n;
    init();
    vector<string> v;
    for(int i = 0; i < (1 << n); i++){
        string res = "";
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                res += to_string(a[j]) + " ";
            }
        }
        if (res != "")
        {
            v.push_back(res);
        }
        
    }
    sort(v.begin(), v.end());

    for(auto &x : v){
        cout << x << endl;
    }
}
