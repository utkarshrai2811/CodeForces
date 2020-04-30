#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	string str;
	cin>>str;
	int a = 0;
	int b = 0;
	for(int i=0; i<(int)str.length(); i++) {
		if(str[i] == 'a')
			a += 1;
		else
			b += 1;
		}
	if(a>b)
		cout<<str.length()<<"\n";
	else {
		while(a<b) {
			b--;
		}
		cout<<a+b-1<<"\n";
	}
	return 0;
}
