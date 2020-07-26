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
vector<int> a(n);
ll sum=0;
for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
sort(a.begin(),a.end());
if(2*a[n-1]>sum)cout<<2*a[n-1];
else cout<<sum<<"\n";
}
return 0;
}