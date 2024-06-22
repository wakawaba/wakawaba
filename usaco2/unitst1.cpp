#include<bits/stdc++.h>
using namespace std;

int x, n;
int ans;

void func(int cur_day) {
	if (n < cur_day) {
		return;
	}
	if (!(cur_day%7 == 0)) {
		ans *= x;
	}
	if (cur_day == n) {
		return;
	}
	
	func(cur_day+1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> x >> n;
	ans = x;
	
	func(2);
	
	cout << ans;
}
