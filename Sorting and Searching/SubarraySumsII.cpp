#include <bits/stdc++.h>
 
using namespace std;
 
#define mod 1000000007
#define ll long long int
#define mk make_pair
#define pb push_back
#define xx first
#define yy second
 
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=5005;
const int MM = 1e7+1;
const int N=200010;
 
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
ll n,x;
cin>>n>>x;
vector<ll> a(n);
for(int i=0;i<n;i++)cin>>a[i];
long long int ans=0;
ll dp[n+1];
dp[0]=0;
for(int i=1;i<=n;i++)dp[i]=dp[i-1]+a[i-1];
map<ll,int> m;
m[0]=1;
for(int i=0;i<n;i++){
    ans+=m[dp[i+1]-x];
    m[dp[i+1]]++;
}
cout<<ans;
}
return 0;
}