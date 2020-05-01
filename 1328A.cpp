#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int t,a,b;
	cin>>t;
	while(t--) {
		cin>>a>>b;
		if(a>b) {
			if(a%b==0) {
				cout<<0<<"\n";
			}
			else if(a%b!=0) {
				cout<<b-(a%b)<<"\n";
			}
		}
		else {
			cout<<b-a<<"\n";
		}
	}
	return 0;
}
