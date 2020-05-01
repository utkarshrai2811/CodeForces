#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int n,i,max;
    while (cin>>n) {
        int arr[n],sum = 0;
        for (i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+i);
        max = arr[n-1];
        for (i=0; i<n-1; i++)
            sum += abs(max-arr[i]);
        cout<<sum<<"\n";
		return 0;
    }	
}
