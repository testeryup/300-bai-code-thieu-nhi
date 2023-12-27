#include<iostream>
#include<string>
#include<sstream>
#include<ctype.h>
#include<algorithm>
#include<unordered_set>
#include<vector>
#include<set>

using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i || i == n - j - 1)
            {
                cin >> a[i][n - j - 1];
            }
            else cin >> a[i][j];
            
            
        }
    }
    cout << "res:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
            
        }
        cout << endl;
    }
    
    return 0;
}

#test
8
519 178 774 271 764 669 193 986
103 481 214 628 803 100 528 626
544 925 24 973 62 182 4 433
506 594 726 32 493 143 223 287
65 901 188 361 414 975 271 171
236 834 712 761 897 668 286 551
141 695 696 625 20 126 577 695
659 303 372 467 679 594 852 485
res:
986 178 774 271 764 669 193 519
103 528 214 628 803 100 481 626
544 925 182 973 62 24 4 433
506 594 726 493 32 143 223 287
65 901 188 414 361 975 271 171
236 834 668 761 897 712 286 551
141 577 696 625 20 126 695 695
485 303 372 467 679 594 852 659
