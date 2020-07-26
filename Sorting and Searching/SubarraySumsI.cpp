#include <bits/stdc++.h>
#define inf 1000000007
#define N 200005
using namespace std;
 
 
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
int t=1;
//cin>>t;
while(t--){
int n,x;
cin>>n>>x;
vector<int> a(n);
for(int i=0;i<n;i++)cin>>a[i];
long long int ans=0,sum=0;
int j=0;
for(int i=0;i<n && j<n ;i++){
sum+=a[i];
 
if(sum>x){while(sum>x && j<n){sum-=a[j++];}}
if(sum==x){ans++;sum-=a[j++];}
 
}
cout<<ans;
}
 
	return 0;
}