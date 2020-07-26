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
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
vector<vector<int> > dp(n+1,vector<int>(1e5+1,0));
dp[0][0]=1;
set<int> ans;
for(int i=1;i<=n;i++){
for(int j=0;j<=1e5;j++){
    if(j==0){dp[i][j]=1;continue;}
    if(dp[i-1][j])dp[i][j]=1;
    if(j-arr[i-1]>=0 && dp[i-1][j-arr[i-1]])dp[i][j]=1;
    if(dp[i][j]==1)ans.insert(j);
}
}
cout<<ans.size()<<"\n";
for(auto x:ans)cout<<x<<" ";
}
return 0;
}