#include <bits/stdc++.h>
 
using namespace std;
 
#define mod 1000000007
#define ll long long int
#define mk make_pair
#define pb push_back
#define xx first
#define yy second
#define ar array
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=5005;
const int MM = 1e7+1;
const int N=2000050;
 
ll d[N];
 
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
d[0]=1;
d[1]=0;
d[2]=1;
for(int i=3;i<=1000000;i++)d[i]=((i-1)%M*(d[i-1]+d[i-2])%M)%M;
while(T--){
ll n;
cin>>n;
cout<<d[n]<<"\n";
}
return 0;
}