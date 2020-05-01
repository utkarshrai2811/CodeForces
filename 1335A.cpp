#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int t,n;
	cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(n/2-(n%2==0))<<'\n';
    }
    return 0;
}
