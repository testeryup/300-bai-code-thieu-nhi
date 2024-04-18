#include<bits/stdc++.h>
using namespace std; 

int a[100] , n , k , ok ;

void init(){
    for(int i = 1; i <= k; ++i) a[i] = i;
}

void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    if (i == 0)
    {
        ok = 1;
    }
    else{
        ++a[i];
        for(int j = i + 1; j <= k; ++j){
            a[j] = a[j - 1] + 1;
        }
    }
}

int cmpPermutation(const int *x, const int *y){
    for(int i = 1; i <= k; ++i){
        if (x[i] != y[i])
        {
            return 0;
        }
    }
    return 1;
}

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Hàm tính tổ hợp chập k của n
long long combination(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    if (k == 1 || k == n - 1)
        return n;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main(){
    cin >> n >> k;
    int temp[k + 1], ans = 1;
    for(int i = 1; i <= k; ++i){
        cin >> temp[i];
    }

    init();
    while(!ok){
        if (cmpPermutation(temp, a))
        {
            break;
        }
        ++ans;

        sinh();
    }
    int comb = combination(n, k);
    cout << comb - ans + 1;
    return 0;
}
