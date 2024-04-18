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
        init();
    }
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int cmpPermutation(const int *x, const int *y){
    for(int i = 1; i <= n; ++i){
        if (x[i] != y[i])
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    cin >> n;
    int temp[n + 1];
    for(int i = 1; i <= n; ++i){
        cin >> temp[i];
    }

    int ans = 1;

    init();
    while(!ok){
        if(cmpPermutation(temp, a)){
            cout << ans;
            return 1;
        }
        sinh();
        ++ans;
    }
    cout << -1;
    return 0;
}
