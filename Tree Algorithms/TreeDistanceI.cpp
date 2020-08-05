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
 
ll n;
vector<int> adj[N];
bool vis[N];
ll ans=0,mx=0;
ll d1[N],d2[N];
void dfs(int x,int d){
  vis[x]=1;
  if(d>ans){
    ans=d;
    mx=x;
  }
  for(auto i:adj[x]){
    if(!vis[i])dfs(i,d+1);
  }
 
}
void dfs1(int x,int d){
  vis[x]=1;
  d1[x]=d;
  if(d>ans){
    ans=d;
    mx=x;
  }
  for(auto i:adj[x]){
    if(!vis[i])dfs1(i,d+1);
  }
 
}
void dfs2(int x,int d){
  vis[x]=1;
  d2[x]=d;
  if(d>ans){
    ans=d;
    mx=x;
  }
  for(auto i:adj[x]){
    if(!vis[i])dfs2(i,d+1);
  }
 
}
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
cin>>n;
for(int i=0;i<n-1;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    adj[a].pb(b);
    adj[b].pb(a);
}
dfs(0,0);
memset(vis,false,sizeof(vis));
ans=0;
dfs1(mx,0);
ans=0;
memset(vis,false,sizeof(vis));
dfs2(mx,0);
for(int i=0;i<n;i++)cout<<max(d1[i],d2[i])<<" ";
 
}
return 0;
}#include <bits/stdc++.h>
 
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
 
ll n;
vector<int> adj[N];
bool vis[N];
ll ans=0,mx=0;
ll d1[N],d2[N];
void dfs(int x,int d){
  vis[x]=1;
  if(d>ans){
    ans=d;
    mx=x;
  }
  for(auto i:adj[x]){
    if(!vis[i])dfs(i,d+1);
  }
 
}
void dfs1(int x,int d){
  vis[x]=1;
  d1[x]=d;
  if(d>ans){
    ans=d;
    mx=x;
  }
  for(auto i:adj[x]){
    if(!vis[i])dfs1(i,d+1);
  }
 
}
void dfs2(int x,int d){
  vis[x]=1;
  d2[x]=d;
  if(d>ans){
    ans=d;
    mx=x;
  }
  for(auto i:adj[x]){
    if(!vis[i])dfs2(i,d+1);
  }
 
}
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
cin>>n;
for(int i=0;i<n-1;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    adj[a].pb(b);
    adj[b].pb(a);
}
dfs(0,0);
memset(vis,false,sizeof(vis));
ans=0;
dfs1(mx,0);
ans=0;
memset(vis,false,sizeof(vis));
dfs2(mx,0);
for(int i=0;i<n;i++)cout<<max(d1[i],d2[i])<<" ";
 
}
return 0;
}