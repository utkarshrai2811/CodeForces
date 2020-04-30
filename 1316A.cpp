#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int t,n,m,a,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>m;
        for(int i=0; i<n; i++){
            cin>>a;
            sum+=a;
        }
        cout<<min(m,sum)<<"\n";
    }
    return 0;
}
