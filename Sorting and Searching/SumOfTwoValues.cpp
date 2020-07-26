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
const int N=100010;
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
ll n,x;
cin>>n>>x;
map<int,int> m;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    if(m[x-a]){
        cout<<m[x-a]<<" "<<i+1<<"\n";
        return 0;
    }
    else m[a]=i+1;
}
cout<<"IMPOSSIBLE\n";
}
return 0;
}