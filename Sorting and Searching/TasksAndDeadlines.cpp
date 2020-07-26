#include <bits/stdc++.h>
using namespace std;
 
int main() {
  /*ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);*/
    int t=1;
  //  cin>>t;
    while(t--){
    int n,x;
    cin>>n;
    vector<int> v(n);
    long long int ans=0;
    for(int i=0;i<n;i++){
        cin>>v[i]>>x;
        ans+=x;
    }
    sort(v.begin(),v.end());
    long long int c[n+1]={};
    for(int i=0;i<n;i++)
    {
        c[i+1]=c[i]+v[i];
    }
    for(int i=1;i<=n;i++){
        ans-=c[i];
    }
    cout<<ans;
    }
  return 0;
}
/*_*/