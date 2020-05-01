#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int n, pi;
    cin >> n;
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        cin >> pi;
        sum += pi;
    }
    cout<<fixed<<setprecision(14)<<sum/n<<"\n";
    return 0;
}
