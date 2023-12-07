#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cmath>
#include<sstream>

using namespace std;
using ll = long long;

int main(){
    string str; getline(cin, str);
    stringstream iStr(str);
    vector<int> v;
    int n, oddCount = 0;
    while(iStr >> n){
        v.push_back(n);
        if(n%2 != 0) ++oddCount;
    }    

    if(v.size() % 2 == 1 || (n - oddCount) == oddCount){
        cout << "NO";
        return 0;
    }
    cout << "YES";

    return 0;
}
