#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, n, m; 
	int mis = 0, chr = 0;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> n >> m;
        if (n > m)
            mis++;
        else if(n < m) 
            chr++;
    }
    if(mis > chr) 
        cout << "Mishka";
    else if(chr > mis)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
}
