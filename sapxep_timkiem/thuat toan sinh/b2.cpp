#include<bits/stdc++.h>
using namespace std; 

int a[100] , n , k , ok ;

void init(){
    for(int i = 1; i <= k; ++i){
        a[i] = i;
    }
}

void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i) --i;
    if (i == 0)
    {
        init();
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; ++j){
            a[j] = a[j - 1] + 1;
        }
    }
}

int main(){
    cin >> n >> k;
    for(int i = 1; i <= k; ++i){
        cin >> a[i];
    }
    sinh();
    for(int i = 1; i <= k; ++i) cout << a[i] << ' ';
    return 0;
}
