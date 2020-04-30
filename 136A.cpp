#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int n,b,mas[105];
	cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        mas[b] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << mas[i] << " ";
    }
}
