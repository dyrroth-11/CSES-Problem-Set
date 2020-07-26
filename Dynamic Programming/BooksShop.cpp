#include <bits/stdc++.h>
 
using namespace std;
 
#define mod 1000000007
#define ll long long int
#define mk make_pair
#define pb push_back
#define xx first
#define yy second
 
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=5005;
const int MM = 1e7+1;
const int N=200010;
 
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
int n,x;
cin>>n>>x;
int w[n+1],v[n+1];
for(int i=1;i<=n;i++)cin>>w[i];
for(int i=1;i<=n;i++)cin>>v[i];
vector<vector<int> > dp(n+1,vector<int>(x+1,0));
for(int i=1;i<=n;i++){
    for(int j=0;j<=x;j++){
        dp[i][j]=dp[i-1][j];
        if(j-w[i]>=0){
            dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
        }
    }
}
cout<<dp[n][x]<<"\n";
}
return 0;
}