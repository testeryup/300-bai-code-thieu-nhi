#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m; cin >> n >> m;
    std::vector<int> b(n);
    std::vector<int> c(m);
    for(auto &x : b) cin >> x;
    for(auto &x : c) cin >> x;

    int i = 0, j = 0;

    while(i < n && j < m){
        if (b[i] <= c[j])
        {
            cout << "b" << ++i << ' ';
            
        }
        else{
            cout << "c" << ++j << ' ';
        }
    }

    while(i < n){
        cout << "b" << ++i << ' ';
    }

    while(j < m){
        cout << "c" << ++j << ' ';
    }
    return 0;
}
