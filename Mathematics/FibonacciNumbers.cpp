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
const int N=2000050;
 
pair<ll,ll> fib (ll n) {
    if (n == 0)
        return {0, 1};
 
    auto p = fib(n >> 1);
    ll c = (p.first%M* (2 * p.second - p.first+M)%M)%M;
    ll d = ((p.first%M*p.first%M)%M + (p.second%M * p.second%M)%M)%M;
    if (n & 1)
        return {d, (c + d)%M};
    else
        return {c, d};
}
 
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
ll n;
cin>>n;
auto x=fib(n);
cout<<(x.xx+M)%M<<"\n";
}
return 0;
}