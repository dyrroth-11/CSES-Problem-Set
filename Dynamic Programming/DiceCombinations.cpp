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
int n;
cin>>n;
dp[0]=1;
for(int i=1;i<MM;i++){
    for(int j=1;j<=6;j++){
        if(i-j>=0){
            dp[i]=(dp[i]+dp[i-j])%M;
        }
    }
}
cout<<dp[n];
}
return 0;
}
 
/*_*/