#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m,x,cnt;
	cin >> n;
	cnt = 0;
	x = 1;
	while(1) {
		if(x>n-x)
			break;
		m=n-x;
		if(m%x==0)
			cnt++;
		x++;
	}
	cout << cnt << "\n";
	return 0;
}
