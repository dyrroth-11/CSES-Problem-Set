#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;
ll p(ll x , ll y , ll m){
  ll ans=1;
  while(y){
    if(y&1)ans=(ans*x)%m;
    x= (x*x)%m;
    y>>=1;
  }
  return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
ll a,b,c;
cin>>a>>b>>c;
cout<<p(a,p(b,c,mod-1),mod)<<"\n";
}
	return 0;
}