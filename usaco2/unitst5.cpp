#include<bits/stdc++.h>
using namespace std;

int arr[3000];

int fibo(int N) {
    if (N <= 2) {
        return 1;
    }
    if (arr[N] != 0) {
        return arr[N]%10009;
    }
    
    return arr[N] = (fibo(N-1) + fibo(N-2))%10009;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int N; cin >> N;
    cout << fibo(N);
}
