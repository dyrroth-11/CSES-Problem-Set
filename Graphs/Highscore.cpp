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
vector<int> ad[N];
bool vis[N];
bool vi[N];
ll d[N];
 
void dfs(int x){
vis[x]=true;
for(auto i:adj[x]){
    if(!vis[i[1]])dfs(i[1]);
}
 
}
void dfs1(int x){
vi[x]=true;
for(auto i:ad[x]){
    if(!vi[i])dfs1(i);
}
 
}
 
 
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
    adj[x].pb({z,y});
    ad[y].pb(x);
}
memset(d,0xc0,sizeof(d));
d[0]=0;
dfs(0);
dfs1(n-1);
for(int i=0;i<=n;i++){
    int flag=false;
    for(int j=0;j<n;j++){
        for(ar<ll,2> x: adj[j]){
            if( d[x[1]]<d[j]+x[0]){
                d[x[1]]=d[j]+x[0];
                if(vis[x[1]] && vi[x[1]])flag=true;
            }
        }
    }
    if(i==n && flag){
        cout<<"-1\n";
        exit(0);
    }
}
cout<<d[n-1]<<"\n";
 
}
return 0;
}