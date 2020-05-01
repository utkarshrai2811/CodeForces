#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int x1,x2,x3,x4;
	cin>>x1>>x2>>x3>>x4;
	int n = max({x1,x2,x3,x4});
	if(n==x4)
		cout<<x4-x3<<" "<<x4-x2<<" "<<x4-x1<<"\n";
	else if(n==x3)
		cout<<x3-x4<<" "<<x3-x2<<" "<<x3-x1<<"\n";
	else if(n==x2)
		cout<<x2-x4<<" "<<x2-x3<<" "<<x2-x1<<"\n";
	else
		cout<<x1-x4<<" "<<x1-x3<<" "<<x1-x2<<"\n";
	return 0;
}
