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

int main(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sinh();
    for(int i = 1; i <= n; ++i) cout << a[i] << ' ';
    return 0;
}
