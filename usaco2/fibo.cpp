#include<bits/stdc++.h>
using namespace std;

int fib(int N) {
	if (N == 0) {
		return 0;
	}
	else if (N == 1) {
		return 1;
	}
	
	return fib(N-1) + fib(N-2);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	
	cout << fib(N);
}
