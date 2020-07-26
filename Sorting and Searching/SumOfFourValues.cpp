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
ll n,x;
cin>>n>>x;
ll arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
map<ll,pair<int,int> > m;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(m.count(x-arr[i]-arr[j])){
            pair<int,int> y=m[x-arr[i]-arr[j]];
            if(y.xx!=i && y.xx!=j && y.yy !=i && y.yy!=j ){
                cout<<i+1<<" "<<j+1<<" "<<y.xx+1<<" "<<y.yy+1<<"\n";
                return 0;
            }
        }
        m[arr[i]+arr[j]]={i,j};
    }
}
cout<<"IMPOSSIBLE\n";
}
return 0;
}