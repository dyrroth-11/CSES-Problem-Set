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
vector<ar<ll,2>> ad[N];
ll d[N];
ll d1[N];

int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    ll x,y,z;
    cin>>x>>y>>z;x--;y--;
    adj[x].pb({y,z});
    ad[y].pb({x,z});
}
memset(d,0x3f,sizeof(d));
d[0]=0;
memset(d1,0x3f,sizeof(d1));
d1[n-1]=0;

priority_queue<ar<ll,2>,vector<ar<ll,2>>,greater<ar<ll,2>>> p;
p.push({0,0});
while(!p.empty()){
    ar<ll,2> x=p.top();
    p.pop();
    if(d[x[1]]<x[0])continue;
    for(auto i:adj[x[1]]){
        if(d[i[0]]>x[0]+i[1]){
            d[i[0]]=x[0]+i[1];
            p.push({d[i[0]],i[0]});
        }
    }
}
priority_queue<ar<ll,2>,vector<ar<ll,2>>,greater<ar<ll,2>>> p1;
p1.push({0,n-1});
while(!p1.empty()){
    ar<ll,2> x=p1.top();
    p1.pop();
    if(d1[x[1]]<x[0])continue;
    for(auto i:ad[x[1]]){
        if(d1[i[0]]>x[0]+i[1]){
            d1[i[0]]=x[0]+i[1];
            p1.push({d1[i[0]],i[0]});
        }
    }
}
ll ans=1e18;
for(int i=0;i<n;i++){
    for(auto x:adj[i]){
        ans=min(ans,d[i]+d1[x[0]]+x[1]/2);
       // ans=min(ans,d1[i]+d[x[0]]+x[1]/2);
       // cout<<d[i]+d1[x[0]]+x[1]/2<<" "<<d1[i]+d[x[0]]+x[1]/2<<" ==\n";
    }
}
cout<<ans<<"\n";
}
return 0;
}
