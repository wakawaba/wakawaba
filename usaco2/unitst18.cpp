#include<bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int N, M;
	cin >> N >> M;
	
	vector<vector<int>> pond(N+1, vector<int> (M+1));
	
	int W, H;
	cin >> W >> H;
	
	vector<vector<int>> prefix_net(N+1, vector<int> (M+1));
	
	for (int i=1;i<=N;i++) {
		for (int j=1;j<=M;j++) {
			cin >> pond[i][j];
			
			prefix_net[i][j] = pond[i][j] + prefix_net[i-1][j] + prefix_net[i][j-1] - prefix_net[i-1][j-1];
		}
	}
	
	int ans = 0;
	
	for (int i=W;i<=N;i++) {
		for (int j=H;j<=M;j++) {
			int cur = prefix_net[i][j] - prefix_net[i-W][j] - prefix_net[i][j-H] + prefix_net[i-W][j-H];
			
			if (cur > ans) {
				ans = cur;
			}
		}
	}
	
	cout << ans;
}
