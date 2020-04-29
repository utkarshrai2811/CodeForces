#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,a,b,get,ans;
	cin >> t;
	while(t--) {
		get = ans = 0;
		cin>>a>>b;
		if(a==b) {
			ans = 0;
		}
		else if(a<b) {
			get = b-a;
			ans++;
			if(get%2==0)
				ans++;
			}
		else if(a>b) {
			get = a-b;
			ans++;
			if(get%2!=0)
				ans++;
			}
		cout<<ans<<"\n";
	}
	return 0;
}
