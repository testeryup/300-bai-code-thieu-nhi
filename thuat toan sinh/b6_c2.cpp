#include<bits/stdc++.h>
using namespace std; 

int a[100] , n , k , ok ;

void init(){
    for(int i = 1; i <= n; ++i){
        a[n - i + 1] = i;
    }
}

void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] < a[i + 1]) --i;
    if (i == 0)
    {
        ok = true;
    }
    else{
        int j = n;
        while(a[i] < a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    cin >> n;
    
    init();
    while(!ok){
        for(int i = 1; i <= n; ++i){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}
