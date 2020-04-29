#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int n,i,a,b,s=0,f=0;
	string str;
	while(cin>>n) {
		cin>>str;
		for(i=0; i<n;i++) {
			if(a == 1 && str[i] == 'S') {
				++f;
				a = b = 0;
			}
			else if (b == 1 && str[i] == 'F') {
                ++s;
                a = b = 0;
            }
            
            if (str[i] == 'F')
                a = 1;
            else
                b = 1;
               }
            if(s>f)
				cout<<"YES"<<"\n";
			else
				cout<<"NO"<<"\n";
		}
			return 0;
}
