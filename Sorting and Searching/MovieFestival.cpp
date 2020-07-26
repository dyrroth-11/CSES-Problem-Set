#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int t=1;
//cin>>t;
while(t--){
int n,x,y,ans=0,end=0;
cin>>n;
vector<pair<int,int> >v;
for(int i=0;i<n;i++){
    cin>>x>>y;
    v.push_back({y,x});
}
sort(v.begin(),v.end());
for(int i=0;i<n;i++){
    while(end>v[i].second && i<n){
        i++;
    }
    if(i!=n){ans++;
    end=v[i].first;}
}
cout<<ans<<"\n";
}
return 0;
 
}