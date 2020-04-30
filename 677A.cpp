#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int n,h,i,w=0;
	cin>>n>>h;
	while(n--) {
		cin>>i;
		if(i<=h) 
			w+=1;
		else
			w+=2;
		}
		cout<<w<<"\n";
		return 0;
}
