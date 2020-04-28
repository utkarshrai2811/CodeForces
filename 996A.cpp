#include <bits/stdc++.h>
using namespace std;
int n, a, b, c, d, e, sum;
int main() {
	cin >> n;
	a = n/100;
	n -= a * 100;
	b = n/20;
	n -= b * 20;
	c = n/10;
	n -= c * 10;
	d = n/5;
	n -= d * 5;
	e = n/1;
	n -= e * 1;
	sum = a+b+c+d+e;
	cout << sum << "\n";
}
