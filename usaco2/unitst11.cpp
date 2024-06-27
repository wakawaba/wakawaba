#include<bits/stdc++.h>
using namespace std;

int N;
int memo[1000];

int f(int i) {
    if (i == N) {
        return 1;
    }
    if (i > N) {
        return 0;
    }
    if (memo[i] != 0) {
    	return memo[i];
	}
    
    return memo[i] = f(i+1)+f(i+2)+f(i+3);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    
    cout << f(0);
}
