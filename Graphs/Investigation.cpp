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
vector<ar<ll,2>>ad[N];
bool vis[N],ac[N];
int p[N],n,m;
ll dp[N],dp2[N],dp3[N];
ll d[N];
 
void dfs(int x){
vis[x]=1;
//ac[x]=1;
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
 
void dfs2(int x){
vis[x]=1;
//ac[x]=1;
dp2[x]=(x==n-1?1:1e9);
for(auto i :adj[x]){
    if(ac[i]){
       cout<<"IMPOSSIBLE\n";
        exit(0);
    }
    else if(!vis[i]){
        p[i]=x;
        dfs2(i);
    }
    if(dp2[x]>dp2[i]+1){
        dp2[x]=dp2[i]+1;
    }
}
ac[x]=0;
}
 
void dfs3(int x){
vis[x]=1;
//ac[x]=1;
dp3[x]=(x==n-1?1:-1e9);
for(auto i :adj[x]){
    if(ac[i]){
       cout<<"IMPOSSIBLE\n";
        exit(0);
    }
    else if(!vis[i]){
        p[i]=x;
        dfs3(i);
    }
     if(dp3[x]<dp3[i]+1){
        dp3[x]=dp3[i]+1;
    }
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
    ll x,y,z;
    cin>>x>>y>>z;x--;y--;
    ad[x].pb({z,y});
   // ad[y].pb({x,z});
}
memset(d,0x3f,sizeof(d));
priority_queue<ar<ll,2>,vector<ar<ll,2>>,greater<ar<ll,2>>> q;
q.push({0,0});
d[0]=0;
while(!q.empty()){
    ar<ll,2> x=q.top();
    q.pop();
    if(d[x[1]]<x[0])continue;
    for(auto i:ad[x[1]]){
        if(d[i[1]]>x[0]+i[0]){
            d[i[1]]=x[0]+i[0];
            q.push({d[i[1]],i[1]});
        }
    }
}
for(int i=0;i<n;i++){
    for(auto x:ad[i]){
        if(d[i]+x[0]==d[x[1]])adj[i].pb(x[1]);
    }
}
cout<<d[n-1]<<" ";
for(int i=0;i<n;i++)if(!vis[i])dfs(i);
cout<<dp[0]<<" ";
memset(vis,false,sizeof(vis));
for(int i=0;i<n;i++)if(!vis[i])dfs2(i);
cout<<dp2[0]-1<<" ";
memset(vis,false,sizeof(vis));
for(int i=0;i<n;i++)if(!vis[i])dfs3(i);
cout<<dp3[0]-1<<"\n";
}
return 0;
}