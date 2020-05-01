#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
//typedef unsigned long long int ull;
int main() {
	int a, arr[10][10];
	cin>>a;
    for(int i=0; i<a; i++) {
        for(int j=0; j<a; j++) {
            if(i == 0) 
                arr[i][j]=1;
            else if(j==0)
                arr[i][j]=1;
            else
				arr[i][j]=arr[i-1][j]+arr[i][j-1];        
        }
    }
    cout<<arr[a-1][a-1]<<"\n";
    return 0;
}
