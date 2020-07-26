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
int n,k;
cin>>n>>k;
ll l=0,r=1e15;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll ans=0;
while(l<=r){
    ll mid=(l+r)>>1;
    bool flag=false;
    ll sum=0,cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]+sum>mid){
            cnt++;
            sum=arr[i];
        }
        else sum+=arr[i];
    if(sum>mid){cnt=k+1;break;}
    }
    if(cnt<k)flag=true;
   // cout<<mid<<" "<<flag<<" "<<cnt<<"==\n";
    if(flag){
        ans=mid;
        r=mid-1;
    }
    else l=mid+1;
}
cout<<ans<<"\n";
}
return 0;
}