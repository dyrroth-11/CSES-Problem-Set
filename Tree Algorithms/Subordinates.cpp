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
 
ll n,ans[N];
vector<int> s[N];
 
ll dfs(int x,int p){
int cnt=0;
if(s[x].size()==0)return ans[x]=0;
for(auto i:s[x]){
    if(i==p)continue;
    cnt+=(dfs(i,x)+1);
}
return ans[x]=cnt;
}
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
cin>>n;
for(int i=2;i<=n;i++){
    int x;cin>>x;
    s[x].pb(i);
}
dfs(1,-1);
for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
}
return 0;
}