#include<bits/stdc++.h>
using namespace std; 

int a[100] , n , k , ok ;

void init(){
    for(int i = 1; i <= n; ++i){
        a[i] = i;
    }
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] > a[i + 1]) --i;
    if (i == 0)
    {
        ok = true;
    }
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    vector<vector<int>> reversed_permutation;

    cin >> n;
    init();
    while(!ok){
        // string s = "";
        

        vector<int> tmp(a + 1, a + n + 1);
        reversed_permutation.push_back(tmp);
        // cout << endl;
        
        sinh();
        // reversed_permutation.push_back(s);
    }

    for(int i = reversed_permutation.size() - 1; i >= 0; --i){
        for(auto &x : reversed_permutation[i]){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
