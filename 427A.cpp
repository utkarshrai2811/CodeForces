#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int n,avl=0,occ=0,tmp;
    cin>>n;
    while(n--) {
        cin>>tmp;   
        if(tmp>0) 
			avl+=tmp;
        else if(avl>0)
            avl--;
        else 
			occ++;
		}
    cout<<occ<<"\n";
    return 0;
}
