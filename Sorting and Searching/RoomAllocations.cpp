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
int n;
cin>>n;
vector<pair<pair<int,int>,int>> v;
priority_queue<pair<int,int> ,vector<pair<int,int>> ,greater<pair<int,int>> > p;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v.pb(mk(mk(x,y),i));
}
int cnt=0;
sort(v.begin(),v.end());
vector<int> ans(n);
for(int i=0;i<n;i++){
    if(p.empty() || p.top().xx>=v[i].xx.xx){
        cnt++;
        p.push(mk(v[i].xx.yy,cnt));
        ans[v[i].yy]=cnt;
    }
    else{
        auto x=p.top();
        p.pop();
        p.push(mk(v[i].xx.yy,x.yy));
        ans[v[i].yy]=x.yy;
    }
}
cout<<cnt<<"\n";
for(auto i:ans)cout<<i<<" ";
}
return 0;
}