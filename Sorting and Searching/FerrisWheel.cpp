#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int t=1;
//cin>>t;
while(t--){
int n,k,x,ans=0;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){cin>>a[i];}
sort(a,a+n);
int i=0,j=n-1;
while(j>=i){
    if(a[i]+a[j] <= k){i++;j--;}
    else j--;
    ans++;
}
cout<<ans;
}
return 0;
 
}