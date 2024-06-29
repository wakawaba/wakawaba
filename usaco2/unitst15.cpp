#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int A, B;
    cin >> A >> B;
    
    vector<int> fish(A);
    
    for (int i=0;i<A;i++) {
        cin >> fish[i];
    }
    
    int ans = 0;
    
    for (int i=0;i<=A-B;i++) {
        int cur = 0;
        
        for (int j=0;j<B;j++) {
            cur += fish[i+j];
        }
        
        if (cur > ans) {
            ans = cur;
        }
    }
    
    cout << ans;
}
