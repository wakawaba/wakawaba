#include<bits/stdc++.h>
using namespace std;

int pascal(int x, int y) {
    if (y == 0) {
        return 1;
    }
    else if (y == 1) {
        return x;
    }
    else if (x == y) {
        return 1;
    }
    else if (x < y) {
        return 0;
    }
    
    return pascal(x-1, y-1) + pascal(x-1, y);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int x, y;
    cin >> x >> y;
    
    cout << pascal(x-1, y-1);
}
