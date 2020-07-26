#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int t=1;
//cin>>t;
while(t--){
int n,ans=0,j=0,x;
cin>>n;
int a[n];
set<int> m;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++){
      while(m.count(a[i])){
        m.erase(a[j++]);
      }  
    m.insert(a[i]);
    ans=max(ans,i-j+1);
   // cout<<ans<<" ";
}
cout<<ans;
}
return 0;
 
}