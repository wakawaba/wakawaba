#include<bits/stdc++.h>

using namespace std;

struct dates {
  int y;
  int m;
  int d;
  
  bool operator< (dates &t) {
    	if (y == t.y) {
    		if (m == t.m) {
				return d < t.d;
			}
			return m < t.m;
		}
		return y < t.y;
	}
};

int main() {
  int N;
  scanf("%d", &N);

  dates bdays[N];

  for (int i = 0; i < N; i++) {
    scanf("%d.%d.%d", &bdays[i].y, &bdays[i].m, &bdays[i].d);
  }
  
  sort(bdays, bdays+N);

  for (int i = 0; i < N; i++) {
    printf("%d.%02d.%02d\n", bdays[i].y, bdays[i].m, bdays[i].d);
  }
}

