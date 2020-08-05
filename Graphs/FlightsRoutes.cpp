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
 
vector<ar<ll,2>> adj[N];
vector<ll> d[N];
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
int n,m,k;
cin>>n>>m>>k;
for(int i=0;i<m;i++){
    ll x,y,z;
    cin>>x>>y>>z;x--;y--;
    adj[x].pb({y,z});
   // ad[y].pb({x,z});
}
 
 
priority_queue<ar<ll,2>,vector<ar<ll,2>>,greater<ar<ll,2>>> p;
p.push({0,0});
while(!p.empty()){
    ar<ll,2> x=p.top();
    p.pop();
    if(d[x[1]].size()>=k)continue;
    d[x[1]].pb(x[0]);
    for(auto i:adj[x[1]]){
            p.push({x[0]+i[1],i[0]});
    }
}
for(int i=0;i<k;i++)cout<<d[n-1][i]<<" ";
 
}
return 0;
}