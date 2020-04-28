#include <bits/stdc++.h>
using namespace std;
int main() {
	int l, b;
	cin >> l >> b;
	int counter = 0;
	while(b >= l) {
		b = b * 2;
		l = l * 3;
		counter++;
	}
	cout << counter << "\n";
}
