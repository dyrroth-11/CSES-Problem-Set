#include <bits/stdc++.h>
#define lim 10000002
using namespace std;
int prime[lim];
void seive(){
    for(int i=2;i*i<lim;i++){
        if(prime[i]==0){
            for(int j=2*i;j<lim;j+=i){
            prime[j]=i;
        }}
    }
    for(int i=1;i<lim;i++)
    if(prime[i]==0)prime[i]=i;
    return;
}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
seive();
cin>>t;
while(t--){
int n;
cin>>n;
long long int ans=1;
int cnt=1;
if(n==1){cout<<"1\n";continue;}
while(n>1){
    int div=prime[n];
    while(n%div==0){
        cnt++;
        n/=div;
    }
   ans*=cnt;
   cnt=1;
}
cout<<ans<<"\n";
}
return 0;
}
/*_*/