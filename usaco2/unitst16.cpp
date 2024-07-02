#include<bits/stdc++.h>
using namespace std;

int A, B, C, D;
int arr[100][100] = {0};
int ans = 0;

void f1(int x, int y, int cur) {
	if (cur > ans) {
        ans = cur;
	}   
    if (y == A-C) {
        return;
    }
    if (x == B-D) {
        return;
    }
    
    for (int i=0;i<=A-C;i++) {
    	for (int j=0;j<=B-D;j++) {
    		cur += arr[x+i][y+j];
    		cout << arr[x+i][y+j] << endl;
		}
	}
    
    f1(x, y+1, cur);
    f1(x+1, y, cur);
    f1(x+1, y+1, cur);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> A >> B;
    cin >> C >> D;
    
    for (int i=0;i<A;i++) {
        for (int j=0;j<B;j++) {
            cin >> arr[i][j];
        }
    }
    
    f1(0, 0, 0);
    
    cout << ans;
}
