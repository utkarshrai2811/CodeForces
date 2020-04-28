#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,i,a,d;
    char ch;

    while (cin >> n) {
        a = 0;
        d = 0;

        for (i=1; i<=n; i++) {
            cin >> ch;

            if (ch == 'A')
                a += 1;
            else
                d += 1;
        }
		
		if (a > d)
            cout << "Anton" << "\n";
        else if (d > a)
            cout << "Danik" << "\n";
        else
            cout << "Friendship" << "\n";
    }
}
