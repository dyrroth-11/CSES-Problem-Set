#include <bits/stdc++.h>
using namespace std;
#define N 200009
long long int n,s;
long long int a[N];
long long int fun(long long int x){
long long int sum=0;
for(int i=0;i<n;i++)sum+=(x/a[i]);
return sum;
}
long long int dyrroth(long long int l,long long int r){
while(r>=l){
    long long int mid=(r+l)/2;
    long long int x=fun(mid);
    //cout<<x<<" ";
    if(x>s)r=mid-1;
    else if(x<s)l=mid+1;
    else r--;
}
return l;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    int t=1;
  //  cin>>t;
    while(t--){
    long long int m=1000000009;
    cin>>n>>s;
    for(int i=0;i<n;i++){cin>>a[i];m=min(m,a[i]);}
    long long int ans=dyrroth(0,m*s);
    cout<<ans;
    }
  return 0;
}
/*_*/