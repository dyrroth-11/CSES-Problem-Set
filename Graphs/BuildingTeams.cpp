#include <bits/stdc++.h>
#define inf 1000000007
#define N 200005
using namespace std;
int n,m;
vector<int> adj[N];
bool vis[N]={};
int p[N];
int d[N];
 
void bfs(int x){
queue<int> q;
q.push(x);
d[x]=0;
p[x]=-1;
vis[x]=true;
while(!q.empty()){
  int s=q.front();
  q.pop();
  for(int i=0;i<adj[s].size();i++){
    if(vis[adj[s][i]]==false){
      vis[adj[s][i]]=true;
      d[adj[s][i]]=d[s]+1;
      p[adj[s][i]]=s;
      q.push(adj[s][i]);
    }
  }
}
return;
}
 
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
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
for(int i=0;i<=n;i++)d[i]=inf;
bfs(0);
//for(int i=0;i<n;i++)cout<<d[i]<<"-"<<p[i]<<"  ";
 
 
if(d[n-1]!=inf){cout<<d[n-1]+1<<"\n";
int j=n-1;
vector<int> v;
while(j!=-1){
  v.push_back(j);
  j=p[j];
}
for(int i=v.size()-1;i>=0;i--){
  cout<<v[i]+1<<" ";
}
}
else cout<<"IMPOSSIBLE\n";
}
	return 0;
}