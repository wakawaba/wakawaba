#include<bits/stdc++.h>
using namespace std;

int euclid(int x, int y) {
	int larger = (x > y) ? x : y;
	int smaller = (x < y) ? x : y;
	
	if (smaller == 0) {
		return larger;
	}
	
	euclid(smaller, larger%smaller);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x, y;
	cin >> x >> y;
	
	int gcd = euclid(x, y);
	int lcm = (x*y)/gcd;
	
	cout << gcd << " " << lcm;
}
