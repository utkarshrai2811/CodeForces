#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	int q;
	ll a,b,c;
	ll ans = 0;
	cin>>q;
	while(q--) {
		cin>>a>>b>>c;
		ans = (a+b+c)/2;
		cout << ans << "\n";
	}
	return 0;
}
