#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int t=1;
//cin>>t;
while(t--){
int n,m,x;
cin>>n>>m;
multiset<int,greater<int> > s;
int ans[m],a[m];
for(int i=0;i<n;i++){cin>>x;s.insert(x);}
 
for(int i=0;i<m;i++){cin>>a[i];ans[i]=-1;}
for(int i=0;i<m;i++){
   multiset<int>:: iterator it=s.lower_bound(a[i]);
   if(it==s.end())cout<<"-1\n";
   else{
    cout<<*it<<"\n";
    s.erase(it);
   }
 
    }
}
return 0;
 
}