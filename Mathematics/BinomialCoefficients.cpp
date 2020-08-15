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
const int N=1000005;
 
ll iv[N],f1[N],f2[N];
 
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
iv[1]=1;f1[0]=1;f2[0]=1;//Base Cases
 
for(int i=2;i<N;i++){
    iv[i]=M-M/i*iv[M%i]%M;
}
for(int i=1;i<N;i++){
    f1[i]=f1[i-1]*i%M;
    f2[i]=f2[i-1]*iv[i]%M;
}
while(T--){
int n;
cin>>n;
while(n--){
    int x,y;
    cin>>x>>y;
    cout<<((f1[x]*f2[y])%M*f2[x-y]%M)%M<<"\n";
}
}
return 0;
}