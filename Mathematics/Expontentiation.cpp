#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
long long int a,b;
cin>>a>>b;
long long int ans=1;
if(b==0){cout<<"1\n";continue;}
while(b>1){
  if(b&1)ans=(ans*a)%m;
  a=(a*a)%m;
  b/=2;
 // cout<<a<<" "; 
}
cout<<(ans*a)%m<<"\n";
}
	return 0;
}