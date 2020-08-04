#include <bits/stdc++.h>
#define mod 1000000007
#define N 100005
using namespace std;
int n,m;
vector<int> adj[N];
bool vis[N];
void dfs(int x){
  vis[x]=true;
  //cout<<x<<" ";
  for(int i=0;i<adj[x].size();i++){
    if(vis[adj[x][i]]==false)dfs(adj[x][i]);
  }
  return;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
int t=1;
//cin>>t;
while(t--){
cin>>n>>m;
int a,b;
for(int i=0;i<m;i++){
  cin>>a>>b;
  a--;b--;
  adj[a].push_back(b);
  adj[b].push_back(a);
}
int ans=0,flag=0;
vector<pair<int,int> > v;
for(int i=0;i<n;i++){
  if(vis[i]==false){
    dfs(i);
  
  if(flag){
    ans++;
    v.push_back(make_pair(i+1,i));
   }
   }
   flag=1;
}
cout<<ans<<"\n";
for(int i=0;i<v.size();i++){
  cout<<v[i].first<<" "<<v[i].second<<"\n";
}
}
	return 0;
}