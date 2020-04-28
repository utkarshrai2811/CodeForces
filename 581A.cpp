#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	int counter = 0;
	int res;
	cin >> a >> b;
	while((a!=0) && (b!=0)) {
		a -= 1;
		b -= 1;
		counter += 1;
	}
	if(a!=0)
		res = a / 2;
	else
		res = b / 2;
	
	cout << counter << " " << res << "\n";
}
