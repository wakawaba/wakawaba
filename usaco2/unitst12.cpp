#include<bits/stdc++.h>
using namespace std;

int N;

void f(int i, char start, char aux, char end) {
    if (i == 1) {
        cout << "move disk " << i << " " << start << "->" << end << endl;
        return;
    }
    
    f(i-1, start, end, aux);
    
    cout << "move disk " << i << " " << start << "->" << end << endl;
    
    f(i-1, aux, start, end);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    cout << pow(2, N)-1 << endl;
    f(N, 'A','B','C');
}
