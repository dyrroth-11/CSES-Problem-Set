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
int n;
cin>>n;
set<int> s;
array<int,3> arr[n];
for(int i=0;i<n;i++){
        cin>>arr[i][1]>>arr[i][0]>>arr[i][2];
        s.insert(arr[i][0]);
        s.insert(arr[i][1]);
}
sort(arr,arr+n);
map<int,int> m;
int cnt=1;
for(auto x:s){
    m[x]=cnt++;
}
ll dp[cnt+1]={};
ll mx=0;
int ct=0;
ll mm[cnt+1]={};
for(int i=0;i<n;i++){
    ll x=m[arr[i][0]];
    for(int j=ct;j<x;j++)mm[j]=mx;
    ct=x;
   // cout<<x<<" "<<m[arr[i][1]]-1<<"==\n";
    dp[x]=max(mx,dp[x]);
    dp[x]=max(mm[m[arr[i][1]]-1]+arr[i][2],dp[x]);
    mx=dp[x];
}
cout<<dp[cnt-1];
}
return 0;
}