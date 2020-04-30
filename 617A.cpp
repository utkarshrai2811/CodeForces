#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int n;
	cin>>n;
	if(n%5==0) 
		cout<<n/5<<"\n";
	else if(n%5!=0) 
		cout<<(n/5)+1<<"\n";
	return 0;
}
