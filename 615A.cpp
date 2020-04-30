#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
        int i,j;
        int n,x,b,m;
        map<int,bool> mp;

        cin>>n>>m;
        for(i=1;i<=m;i++) {       
            mp[i]=false;
        }
        for(i=0;i<n;i++) {
            cin>>x;
            for(j=0;j<x;j++) {
                cin>>b;
                mp[b]=true;
            }
        }
        for(i=1;i<=m;i++) {
            if(mp[i]==false)
            {
                cout<<"NO";
                return 0;
            }
        }

        cout<<"YES";

        return 0;
}
