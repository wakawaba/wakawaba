#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    vector<int> arr(N);
    
    for (int i=0;i<N;i++) {
        cin >> arr[i];
    }
    
    for (int i=0;i<N;i++) {
        for (int j=i+1;j<N;j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    cout << arr[0] << " " << arr[N-1];
}
