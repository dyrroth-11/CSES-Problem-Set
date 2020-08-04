#include <bits/stdc++.h>
#define inf 1000000007
#define N 10005
using namespace std;
//vector<int> adj[N];
int n,m,a1,a2,b1,b2;
char s[N][N];
bool vis[N][N];
int x[4]={0,0,-1,1};
int y[4]={1,-1,0,0};
char p[N][N];
 
int pos(int a,int b){
	return (a>=0 && a<n) && (b>=0 && b<m) && (s[a][b]!='#');
}
bool bfs(int a,int b){
	vis[a][b]=true;
	p[a][b]='S';
	queue<pair<int,int> > q;
	q.push(make_pair(a,b));
	while(!q.empty()){
		int k=q.front().first;
		int l=q.front().second;
		q.pop();
       for(int i=0;i<4;i++){
			   int aa=k+x[i];
			   int bb=l+y[i];
			   if(!vis[aa][bb] && pos(aa,bb)){
				   vis[aa][bb]=true;
				  if(i==0)p[aa][bb]='L';
				  else if(i==1)p[aa][bb]='R';
				  else if(i==2)p[aa][bb]='D';
				  else if(i==3)p[aa][bb]='U';
				  if(aa==b1 && bb==b2)return true;
				  q.push(make_pair(aa,bb));
			   }
	   }
	}
	return false;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
//cin>>t;
while(t--){
cin>>n>>m;
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>s[i][j];
		if(s[i][j]=='A'){a1=i;a2=j;}
		else if(s[i][j]=='B'){b1=i;b2=j;}
	}
}
int ans=0;
if(bfs(a1,a2)){
cout<<"YES\n";
string s;
char c=p[b1][b2];
while(c!='S'){
	ans++;
	if(c=='U'){b1--;s+='D';}
	else if(c=='D'){b1++;s+='U';}
	else if(c=='R'){b2++;s+='L';}
	else {b2--;s+='R';}
	c=p[b1][b2];
}
reverse(s.begin(),s.end());
cout<<ans<<"\n"<<s;
}
else cout<<"NO\n";
 
}
	return 0;
}
/*_*/