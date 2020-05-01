#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int x1,x2,x3;
	cin>>x1>>x2>>x3;
	int n = max({x1,x2,x3});
	int m = min({x1,x2,x3});
	cout<<n-m<<"\n";
	return 0;
}
