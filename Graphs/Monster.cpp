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
const int N=1010;
 
int n,m,a1,a2,b1,b2;
char s[N][N];
bool vis[N][N][2];
int x[4]={0,0,-1,1};
int y[4]={1,-1,0,0};
char p[N][N];
int d[N][N][2];
int pos(int a,int b){
	return (a>=0 && a<n) && (b>=0 && b<m)&&(s[a][b]!='#');
}
void bfs(vector<pair<int,int>> ax ,int z){
    if(z==1){p[ax[0].xx][ax[0].yy]='S';
        int k=ax[0].xx;
        int l=ax[0].yy;
    	if(k==0 || l==n-1 || k==0 || l==m-1){
                    cout<<"YES\n";
                    string s="";
                    char c=p[k][l];
                    int cnt=0;
                    while(c!='k'){
                        if(c=='U'){k--;s+='D';}
                        else if(c=='D'){k++;s+='U';}
                        else if(c=='R'){l++;s+='L';}
                        else if(c=='L'){l--;s+='R';}
                        else break;
                        c=p[k][l];
                        }
                     reverse(s.begin(),s.end());
                     cout<<s.size()<<"\n"<<s<<"\n";
                     exit(0);
 
 
				  }
    }
	queue<pair<int,int> > q;
	for(auto i :ax){
	vis[i.xx][i.yy][z]=true;
	d[i.xx][i.yy][z]=0;
	q.push(mk(i.xx,i.yy));
	}
 
	while(!q.empty()){
		int k=q.front().first;
		int l=q.front().second;
		q.pop();
       for(int i=0;i<4;i++){
			   int aa=k+x[i];
			   int bb=l+y[i];
			   if(!vis[aa][bb][z] && pos(aa,bb)){
				   if(z==0){
				  q.push(mk(aa,bb));
                  vis[aa][bb][z]=true;
				  d[aa][bb][z]=min(d[aa][bb][z],d[k][l][z]+1);
				  }
                  if(z==1 && d[aa][bb][0]>d[k][l][z]+1){
                    d[aa][bb][z]=d[k][l][z]+1;
                    vis[aa][bb][z]=true;
                   //cout<<d[aa][bb][0]<<" "<<d[aa][bb][1]<<" "<<aa<<" "<<bb<<" ==\n";
                    if(i==0)p[aa][bb]='L';
				  else if(i==1)p[aa][bb]='R';
				  else if(i==2)p[aa][bb]='D';
				  else if(i==3)p[aa][bb]='U';
				   if(aa==0 || aa==n-1 || bb==0 || bb==m-1){
                    cout<<"YES\n";
                    string s="";
                    char c=p[aa][bb];
                    int cnt=0;
                    while(c!='k'){
                        if(c=='U'){aa--;s+='D';}
                        else if(c=='D'){aa++;s+='U';}
                        else if(c=='R'){bb++;s+='L';}
                        else if(c=='L'){bb--;s+='R';}
                        else break;
                        c=p[aa][bb];
                        }
                     reverse(s.begin(),s.end());
                     cout<<s.size()<<"\n"<<s<<"\n";
                     exit(0);
 
 
				  }
				   q.push(make_pair(aa,bb));
			   }
	   }
	}
	}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
//cin>>t;
while(t--){
cin>>n>>m;
vector<pair<int,int>> v,v1;
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>s[i][j];
		d[i][j][0]=d[i][j][1]=M;
		if(s[i][j]=='A'){v1.pb(mk(i,j));}
		else if(s[i][j]=='M'){v.pb(mk(i,j));}
	}
}
if(v.size())bfs(v,0);
bfs(v1,1);
 cout<<"NO\n";
}
	return 0;
}