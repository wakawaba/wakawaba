#include<bits/stdc++.h>
using namespace std;

int arr[1000];

int fib(int N) {
	if (N == 0) {
		return 0;
	}
	else if (N == 1) {
		return 1;
	}
	if (arr[N] != 0) {
	    return arr[N];
	}
	
	return arr[N] = (fib(N-1) + fib(N-2))%1000000007;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	
	cout << fib(N)%1000000007;
}
