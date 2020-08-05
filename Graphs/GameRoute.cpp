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
 
vector<int> adj[N];
bool vis[N],ac[N];
int p[N];
ll dp[N];
int n,m;
vector<int> ans;
void dfs(int x){
vis[x]=1;
ac[x]=1;
dp[x]=(x==n-1?1:0);
for(auto i :adj[x]){
    if(ac[i]){
       cout<<"IMPOSSIBLE\n";
        exit(0);
    }
    else if(!vis[i]){
        p[i]=x;
        dfs(i);
    }
    (dp[x]+=dp[i])%=M;
}
ac[x]=0;
}
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
cin>>n>>m;
for(int i=0;i<m;i++){
    ll x,y;
    cin>>x>>y;x--;y--;
    adj[x].pb(y);
   // ad[y].pb({x,z});
}
for(int i=0;i<n;i++)if(!vis[i])dfs(i);
cout<<dp[0]<<"\n";
}
return 0;
}