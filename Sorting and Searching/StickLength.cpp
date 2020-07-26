#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int t=1;
//cin>>t;
while(t--){
int n,s;
long long int ans=0;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++)cin>>a[i];
sort(a.begin(),a.end());
s=a[n/2];
for(int i=0;i<n;i++)ans+=abs(a[i]-s);
cout<<ans;
}
return 0;
 