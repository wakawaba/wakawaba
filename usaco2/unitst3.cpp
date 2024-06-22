#include<bits/stdc++.h>
using namespace std;

int N;

void func(int i) {
    if (i == N) {
        cout << i;
        return;
    }
    cout << i;
    
    func(i+1);
    
    cout << i;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N;
    
    func(1);
}
