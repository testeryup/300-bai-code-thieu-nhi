#include<bits/stdc++.h>
using namespace std; 

int a[100] , n , k , ok ;

void init(){
    for(int i = 1; i <= n; ++i) a[i] = 0;
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if (i == 0)
    {
        ok = 1;
    }
    else{
        a[i] = 1;
    }
}

int main(){
    cin >> n;
    init();
    while(!ok){
        for(int i = 1;i <= n; ++i){
            if(a[i] == 0) cout << 'B';
            else cout << 'A';
            
        }
        cout << endl;
        sinh();
    }
    return 0;
}
