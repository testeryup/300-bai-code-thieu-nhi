#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>

using namespace std;
using ll = long long;
int cmp1(const pair<int, int> &a, const pair<int, int> &b){
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int cmp2(const pair<int, int> &a, const pair<int, int> &b){
    return a.second > b.second;
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    vector<int> a(n);
    

    unordered_map<int, int> ump;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        ump[a[i]]++;
    }

    vector<pair<int, int>> fVector(ump.begin(), ump.end());
    sort(fVector.begin(), fVector.end(), cmp1);
    for(auto &pair : fVector){
        int element = pair.first;
        int frequency = pair.second;

        for(int i = 0; i < frequency; ++i){
            cout << element << ' ';
        }
    }
    cout << endl;

    vector<pair<int, int>> b;

    for (int i = 0; i < n; ++i)
    {
        b.push_back({a[i], ump[a[i]]});
    }
    
    stable_sort(b.begin(), b.end(), cmp2);
    for(const auto &x : b){
        while (ump[x.first] > 0)
        {
            cout << x.first << ' ';
            ump[x.first]--;
        }
        
    }
    return 0;
}
