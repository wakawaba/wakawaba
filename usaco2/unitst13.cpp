#include<bits/stdc++.h>
using namespace std;

int arr[8];
int check[10];

int factorial(int N, int count) {
    if (N == 1) {
        return count;
    }
    
    count *= N;
    
    return factorial(N-1, count);
}

int f2(int i, int N, int a) {
	if (i == 8) {
		return a;
	}
	if (check[i] > 1) {
		a *= factorial(check[i], 1);
	}
	
	return f2(i+1, N, a);
}

void f1(int i, int N) {
    if (i == N) {
        return;
    }
    
    cin >> arr[i];
    check[arr[i]]++;
    
    f1(i+1, N);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    f1(0, N);
    
    cout << (factorial(N, 1)/f2(0, N, 1));
}
