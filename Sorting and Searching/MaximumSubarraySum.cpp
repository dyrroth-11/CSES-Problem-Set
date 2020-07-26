#include <bits/stdc++.h>
using namespace std;
 
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int t=1;
//cin>>t;
while(t--){
int n,x,flag=1;
cin>>n;
long long int sum=0,ans=-100000009;
for(int i=0;i<n;i++){
    cin>>x;
    sum+=x;
    ans=max(sum,ans);
    if(sum<0){sum=0;}
 
}
cout<<ans;
}
return 0;
 
}