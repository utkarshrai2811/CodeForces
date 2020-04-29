#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int n,i;
	int z=0,o=0;
	string s;
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++) {
		if(s[i]=='z')
			z++;
		else if(s[i]=='n')
			o++;
		}
	while(o--)
		cout<<1<<" ";
	while(z--)
		cout<<0<<" ";
	return 0;
}
