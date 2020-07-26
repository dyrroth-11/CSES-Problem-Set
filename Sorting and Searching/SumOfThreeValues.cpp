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
ll n,x;
cin>>n>>x;
ll arr[n+1];
for(int i=1;i<=n;i++)cin>>arr[i];
map<ll,int> m;
for(int i=1;i<=n;i++){
  for(int j=i+1;j<=n;j++){
    if(m.count(x-arr[i]-arr[j])){
        cout<<i<<" "<<j<<" "<<m[x-arr[i]-arr[j]]<<"\n";
        return 0;
    }
  }
  m[arr[i]]=i;
}
cout<<"IMPOSSIBLE";
}
return 0;
}