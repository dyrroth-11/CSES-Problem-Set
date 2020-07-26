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
   multiset<int> m;
   while(n--){
     cin>>x;
     multiset<int>::iterator it =m.lower_bound(x+1);
     if(it==m.end())m.insert(x);
     else {
       m.erase(it);
       m.insert(x);
     }
   }
   cout<<m.size();
    }
  return 0;
}
/*_*/