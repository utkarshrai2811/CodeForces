#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
  ll n,i;
  cin>>n;
  if(n%2) {
    if(n==3) {
      cout<<"1"<<"\n"<<"3";
    }
    else {
      n-=3;
      cout<<(n/2)+1<<"\n";
      for(i=0; i<n/2; i++)
        cout<<"2 ";

      cout<<"3";
    }
  }
  else {
    cout<<n/2<<"\n";
    for(i=0; i<n/2; i++)
      cout<<"2 ";
  }
  return 0;
}
