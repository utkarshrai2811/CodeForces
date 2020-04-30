#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int t,n;
	string s;
	cin>>t;
	while(t--) {
		cin>>s;
		n = s.length();
		if(n >= 2 && s[n - 2] == 'p' && s[n - 1] == 'o')
            cout<<("FILIPINO")<<"\n";
        else if(n >= 4 && s[n - 4] == 'd' && s[n - 3] == 'e' && s[n - 2] == 's' && s[n - 1] == 'u')
			cout<<("JAPANESE")<<"\n";
        else if(n >= 4 && s[n - 4] == 'm' && s[n - 3] == 'a' && s[n - 2] == 's' && s[n - 1] == 'u')
			cout<<("JAPANESE")<<"\n";
        else
			cout<<("KOREAN")<<"\n";
		}
		return 0;
}
