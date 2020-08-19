#include <bits/stdc++.h>
using namespace std;
int h[4]={0,0,1,-1};
int v[4]={1,-1,0,0};
char a[1001][1001];
int vis[1001][1001];
int ans=0;
void fun(int x,int y,int n,int m){
    vis[x][y]=1;
for(int i=0;i<4;i++){
    if(vis[x+h[i]][y+v[i]]==0&&a[x+h[i]][y+v[i]]=='.'&&(x+h[i])>=0&&(x+h[i])<n&&(y+v[i])>=0&&(y+v[i])<m){
        fun(x+h[i],y+v[i],n,m);
    }
}
return ;
}
 
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       cin>>a[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(vis[i][j]==0&&a[i][j]=='.'){
            fun(i,j,n,m);
            ans++;
        }
    }
}
cout<<ans;
return 0;
 
}