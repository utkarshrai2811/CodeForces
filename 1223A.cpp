#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int q;
	cin>>q;
	while(q--) {
		int n;
		cin >> n;
		if(n==2)
			cout<<2<<"\n";
		else if(n%2==0 && n>2)
			cout<<0<<"\n";
		else
			cout<<1<<"\n";
		}
		return 0;
}
