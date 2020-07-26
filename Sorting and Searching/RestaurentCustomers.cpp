#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int t=1;
//cin>>t;
while(t--){
int n,x,y,ans=0,cnt=0;
cin>>n;
priority_queue<pair<int,bool> > p;
pair<int,bool> c;
for(int i=0;i<n;i++){cin>>x>>y;
p.push({-x,1});
p.push({-y,0});
}
while(!p.empty()){
    c=p.top();
    if(c.second)cnt++;
    else cnt--;
    ans=max(ans,cnt);
    p.pop();
}
cout<<ans<<"\n";
}
return 0;
 
}