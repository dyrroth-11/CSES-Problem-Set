#include <bits/stdc++.h>
#define lim 1000002
using namespace std;
int cnt[lim];
int arr[lim];
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
//seive();
//cin>>t;
while(t--){
int n,x,m=1;
cin>>n;
multiset<int> s;
for(int i=0;i<n;i++){cin>>x;arr[x]++;}
for(int i=1;i<lim;i++){
    if(arr[i]>=2){cnt[i]+=1;}
       for(int j=i;j<lim;j+=i){
            if(arr[j]>0){
                cnt[i]++;
            }
        }
    
}
for(int i=1000000;i>0;i--){
    if(cnt[i]>=2){m=i;break;}
}
cout<<m;
}
return 0;
}
/*_*/