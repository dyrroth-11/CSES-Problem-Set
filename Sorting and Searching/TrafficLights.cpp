#include <bits/stdc++.h>
 
using namespace std;
 
#define mod 1000000007
#define ll long long int
#define mk make_pair
#define pb push_back
#define xx first
#define yy second
 
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=5005;
const int MM = 1e7+1;
const int N=200010;
 
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
int x,n;
cin>>x>>n;
set<int> s;
multiset<int> ms;
ms.insert(x);
s.insert(0);
s.insert(x);
while(n--){
    int a;
    cin>>a;
    auto it=s.lower_bound(a);
    it--;
    auto it2=s.upper_bound(a);
    ms.erase(ms.find(*it2-*it));
    ms.insert(*it2-a);
    ms.insert(a-*it);
    s.insert(a);
    auto xx=ms.end();
    xx--;
    cout<<*xx<<" ";
}
 
}
return 0;
}