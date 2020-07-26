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
vector<vector<int> > dp(n+1,vector<int>(n+1,0));
char a[n+1][n+1];
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>a[i][j];
    }
}
if(a[1][1]!='*')dp[1][1]=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(a[i][j]=='.'){
            if(j-1>=1)(dp[i][j]+=dp[i][j-1])%=M;
            if(i-1>=1)(dp[i][j]+=dp[i-1][j])%=M;
        }
    }
}
cout<<dp[n][n]<<"\n";
}
return 0;
}