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
int dp[n][m+1]={};
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(arr[0]==0){
    for(int i=1;i<=m;i++)dp[0][i]=1;
}
else dp[0][arr[0]]=1;
for(int i=1;i<n;i++){
    if(arr[i]==0 ){
        for(int j=1;j<=m;j++){
            for(auto x : {j-1,j,j+1}){
                if(x>=1 && x<=m){
                    (dp[i][j]+=dp[i-1][x])%=M;
                }
            }
        }
    }
    else {
         for(auto x : {arr[i]-1,arr[i],arr[i]+1}){
                if(x>=1 && x<=m){
                    (dp[i][arr[i]]+=dp[i-1][x])%=M;
                }
            }
    }
}
ll ans=0;
for(int i=1;i<=m;i++){
(ans+=dp[n-1][i])%=M;
}
cout<<ans<<"\n";
}
return 0;
}