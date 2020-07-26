#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int t=1;
//cin>>t;
while(t--){
int n,m,k;
cin>>n>>m>>k;
int a[n],b[m];
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<m;i++)cin>>b[i];
sort(a,a+n,greater<int>()) ;
sort(b,b+m,greater<int>()) ;
int i=0,j=0,ans=0;
for(;i<n;){
  if(j==m)break;
  int dif=abs(a[i]-b[j]);
  if(dif<=k){i++;j++;ans++;}
  else if(a[i]>b[j]){i++;}
  else if(a[i]<b[j]){j++;}
}
cout<<ans;  
}
return 0;
 
}