#include<bits/stdc++.h>
using namespace std;

string ans = "";
string a = "0123456789ABCDEF";

void f1(int N, int K) {
    if (N == 0) {
        return;
    }
    
    int r = N%K;
    N /= K;
    
    f1(N, K);

    ans += a[r];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K;
    cin >> N >> K;
    
    f1(N, K);
    
    cout << ans;
}
