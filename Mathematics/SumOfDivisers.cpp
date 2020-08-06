#include <bits/stdc++.h>
 
using namespace std;
 
#define mod 1000000007
#define ll long long int
#define mk make_pair
#define pb push_back
#define xx first
#define yy second
#define ar array
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=5005;
const int MM = 1e7+1;
const int N=200010;
 
ll c(ll x){
ll ans=((((x%M)*((x-1)%M))%M)*((M+1)/2)%M)%M;
return ans;
}
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
ll n;
cin>>n;
ll ans=0;
for(ll i=1;i<=n;i++){
    ll r=n/(n/i);
    (ans+=(n/i%M)*(c(r+1)-c(i)+M)%M)%=M;
        i=r;
}
cout<<(ans+M)%M<<"\n";
}
return 0;
}