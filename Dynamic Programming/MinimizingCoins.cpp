#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
#define xx first
#define yy second
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=1005;
const int MM = 1e6+4;
 
ll dp[MM];
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
int x,n;
cin>>x>>n;
dp[0]=0;
int arr[x];
for(int i=0;i<x;i++)cin>>arr[i];
for(int i=1;i<MM;i++){
        dp[i]=M;
    for(int j=0;j<x;j++){
        if((i-arr[j])>=0 ){
          //  cout<<dp[i-arr[j]]<<"----"<<i-arr[j]<<"\n";
            dp[i]=min(dp[i],dp[i-arr[j]]+1);
        }
    }
}
if(dp[n]==M)cout<<"-1";
else
cout<<dp[n];
}
return 0;
}
 
/*_*/