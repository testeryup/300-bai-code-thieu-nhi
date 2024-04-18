#include <bits/stdc++.h>
using namespace std;

int a[1001] , n, cnt, ok;

void ktao()
{
    cnt = 1;
    a[1] = n;
}

void sinh()
{
    int i = cnt;
    while(i >= 1 && a[i] == 1)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        --a[i];
        int d = cnt - i + 1;
        int x = d / a[i];
        int y = d % a[i];
        cnt = i;
        if (x)
        {
            for(int j = 1; j <= x; ++j){
                a[i + j] = a[i];
            }
            cnt += x;
        }
        if (y){
            ++cnt;
            a[cnt] = y;
        }
    }
}

int main()
{
    cin >> n;
    ktao();
    ok = 1;
    vector<string> v;
    while(ok)
    {
        string s;
        for(int i = 1 ; i <= cnt ; i++)
        {
            s += to_string(a[i]);
            if (i < cnt)
            {
                s += "+";
            }
        }
        v.push_back(s);
        sinh();
    }

    cout << v.size() << endl;
    for(auto &x : v){
        cout << x << endl;
    }
    return 0;
}
