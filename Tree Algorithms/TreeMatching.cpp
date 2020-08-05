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
 
ll n,dp[N][2];
vector<int> adj[N];
 
void dfs(int x,int p){
   // cout<<x+1<<" "<<p+1<<" ==\n";
  vector<ll> suf,pre;
  int nn=0,mm,m;
  dp[x][0]=dp[x][1]=0;
int leaf=1;
    for(auto i:adj[x]){
    if(i==p)continue;
    dfs(i,x);
    leaf=0;
    }
  if(leaf)return;
  for(auto i:adj[x]){
    if(i==p)continue;
    suf.pb(max(dp[i][0],dp[i][1]));
    pre.pb(max(dp[i][0],dp[i][1]));
    nn++;
  }
 
  for(int i=1;i<nn;i++){pre[i]+=pre[i-1];}
  for(int i=nn-2;i>=0;i--)suf[i]+=suf[i+1];
  dp[x][0]=suf[0];
  int cnt=0;
  for(auto i:adj[x]){
       // cout<<"--=-=-=-=-=-=- \n";
    if(p==i)continue;
    ll xx=0;
    if(cnt-1>=0)xx=pre[cnt-1];
    ll yy=0;
    if(cnt+1<nn)yy=suf[cnt+1];
    dp[x][1]=max(dp[x][1],xx+yy+dp[i][0]+1);
    cnt++;
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
dfs(0,-2);
cout<<max(dp[0][0],dp[0][1])<<"\n";
}
return 0;
}