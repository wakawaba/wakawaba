#include<bits/stdc++.h>
using namespace std;

int func(int x, int y) {
    if (y == 1) {
        return x;
    }
    else if (y == x) {
        return 1;
    }
    else if (y > x) {
        return 0;
    }
    
    return func(x-1, y-1) + func(x-1, y);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int x, y;
    cin >> x >> y;
    
    cout << func(x, y);
}
