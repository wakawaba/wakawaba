#include<bits/stdc++.h>
using namespace std;

int white_seg = 0, blue_seg = 0;

void paper_cut(vector<vector<int>> paper, int length) {
	if (length == 0) {
		return;
	}
	
	bool white = true;
	bool blue = true;
	
	for (int i=0;i<length;i++) {
		for (int j=0;j<length;j++) {
			if (paper[i][j] == 1) {
				white = false;
				break;
			}
		}
		if (!white) {
			break;
		}
	}
	for (int i=0;i<length;i++) {
		for (int j=0;j<length;j++) {
			if (paper[i][j] == 0) {
				blue = false;
				break;
			}
		}
		if (!blue) {
			break;
		}
	}
	
	if (white) {
		white_seg++;
		return;
	}
	if (blue) {
		blue_seg++;
		return;
	}
	
	vector<vector<int>> sub1(length/2, vector<int>(length/2));
	vector<vector<int>> sub2(length/2, vector<int>(length/2));
	vector<vector<int>> sub3(length/2, vector<int>(length/2));
	vector<vector<int>> sub4(length/2, vector<int>(length/2));
	
	for (int i=0;i<length/2;i++) {
		for (int j=0;j<length/2;j++) {
			sub1[i][j] = paper[i][j];
			sub2[i][j] = paper[i][j+length/2];
			sub3[i][j] = paper[i+length/2][j];
			sub4[i][j] = paper[i+length/2][j+length/2];
		}
	}
	
	paper_cut(sub1, length/2);
	paper_cut(sub2, length/2);
	paper_cut(sub3, length/2);
	paper_cut(sub4, length/2);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	
	vector<vector<int>> paper(N, vector<int>(N));
	
	for (int i=0;i<N;i++) {
		for (int j=0;j<N;j++) {
			cin >> paper[i][j];
		}
	}
	
	paper_cut(paper, N);
	
	cout << white_seg << "\n" << blue_seg;
}
