#include<bits/stdc++.h>
using namespace std;

int N;

void func(int base) {
	if (base == 0) {
		return;
	}
	
    func(base-1);
    if (base == 1) {
		cout << 1;
		return;
	}
	cout << base;
	func(base-1);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N;
    
    func(N);
}
