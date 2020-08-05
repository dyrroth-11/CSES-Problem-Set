#include <bits/stdc++.h>
 
using namespace std;
 
#define mod 1000000007
#define ll long long int
#define mk make_pair
#define pb push_back
#define xx first
#define yy second
#define ar array
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=5005;
const int MM = 1e7+1;
const int N=200010;
 
ll bl[N][30];
ll n,q;
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
cin>>n>>q;
for(int i=0;i<n;i++){
    cin>>bl[i][0];
    bl[i][0]--;
}
for(int i=1;i<30;i++){
    for(int j=0;j<n;j++){
        bl[j][i]=bl[bl[j][i-1]][i-1];
    }
}
while(q--){
    int x,k;
    cin>>x>>k;
    x--;
    for(int i=0;i<30;i++){
        if(k>>i&1)x=bl[x][i];
    }
    cout<<x+1<<"\n";
}
}
return 0;
}