#include <bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
 
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
int n,m;
cin>>n>>m;
vector<vector<int> > dp(n+1,vector<int>(m+1,1e9));
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(i==j)dp[i][j]=0;
        else {
            for(int k=1;k<j;k++){
                dp[i][j]=min(dp[i][k]+dp[i][j-k]+1,dp[i][j]);
            }
            for(int k=1;k<i;k++){
                dp[i][j]=min(dp[k][j]+dp[i-k][j]+1,dp[i][j]);
            }
        }
       // cout<<dp[i][j]<<" ";
    }
   // cout<<"\n";
}
cout<<dp[n][m];
}
return 0;
}