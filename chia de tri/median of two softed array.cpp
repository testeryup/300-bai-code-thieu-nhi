#include <bits/stdc++.h>
using namespace std;
double medianOfTwoSortedArray(vector<int> &a, vector<int> &b){
    if(a.size() > b.size()){
        return medianOfTwoSortedArray(b, a);
    }
    int x = a.size(), y = b.size();
    int low = 0, high = x;
    while (low <= high)
    {
        int partitionX = (low + high) / 2;
        int partitionY = (x + y + 1) / 2 - partitionX;
        
        int maxLeftX = (partitionX == 0) ? INT_MIN : a[partitionX - 1];
        int minRightX = (partitionX == x) ? INT_MAX : a[partitionX];

        int maxLeftY = (partitionY == 0) ? INT_MIN : b[partitionY - 1];
        int minRightY = (partitionY == y) ? INT_MAX : b[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX)
        {
            if ((x + y) % 2 == 0) {
                return (double)(max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2;
            } else {
                return (double)max(maxLeftX, maxLeftY);
            }
        }
        else if(maxLeftX > minRightY){
            high = partitionX - 1;
        }
        else{
            low = partitionX + 1;
        }
    }
    return -1;
}

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &x : a) cin >> x;

    for(auto &x : b) cin >> x;

    cout << medianOfTwoSortedArray(a, b);
    return 0;
}
