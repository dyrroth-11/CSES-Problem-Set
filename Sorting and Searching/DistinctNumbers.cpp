#include <bits/stdc++.h>
using namespace std;
 
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int t=1;
//cin>>t;
while(t--){
int n,x;
cin>>n;
set<int>s;
for(int i=0;i<n;i++){cin>>x;s.insert(x);}
cout<<s.size();
}
return 0;
 
}