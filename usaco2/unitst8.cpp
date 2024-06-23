#include<bits/stdc++.h>
using namespace std;

int memo[1000][1000];

int pascal(int x, int y) {
	if (memo[x][y] != 0) {
		return memo[x][y];
	}
	
    if (y == 0) {
        return 1;
    }
    else if (y == 1) {
        return x;
    }
    else if (x == y) {
        return 1;
    }
    else if (x < y) {
        return 0;
    }
    
    return memo[x][y] = pascal(x-1, y-1) + pascal(x-1, y);
}

void f2(int i, int j, int x) {
  if (j > i || pascal(i, j) <= 0) {
    return;
  }
  
  cout << pascal(i, j) << " ";
  
  f2(i, j + 1, x);
}

void f1(int i, int j) {
    if (j == i) {
    	return;
	}
	f2(j, 0, i);
	cout << endl;
	f1(i, j+1);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int x;
    cin >> x;
    
    f1(x, 0);
}
