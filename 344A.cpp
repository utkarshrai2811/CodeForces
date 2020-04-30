#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int a,b,c,pas=1;
	cin >> a >> b;
    for (int i = 0; i < a - 1; i++) {
        cin >> c;
        if (b != c) {
            pas+=1;
            b = c;
        }
    }
    cout << pas;
}
