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
 
ll a[5001];
ll dp[5001][5001];
 
ll ddo(int l,int r){
if(l>r)return 0;
if(l==r){
    return dp[l][r]=a[l];
}
if(dp[l][r]!=-1e15)return dp[l][r];
else {
    ll al=ddo(l+1,r);
    ll ar=ddo(l,r-1);
    return dp[l][r]=max(a[l]-al,a[r]-ar);
}
}
 
int main(){
memset(dp,-1,sizeof(dp));
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
ll n;
cin>>n;
ll sum=0;
for(int i=0;i<5001;i++){
    for(int j=0;j<5001;j++)dp[i][j]=-1e15;
}
for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
cout<<(sum+ddo(0,n-1))/2<<"\n";
}
return 0;
}