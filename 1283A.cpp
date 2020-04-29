#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int t,h,m;
	int ans = 0 ;
	cin>>t;
	while(t--) {
		cin>>h>>m;
		ans = 60 - m;
		h++;
		ans += (24-h) * 60;
		cout<<ans<<"\n";
	}
	return 0;
}
