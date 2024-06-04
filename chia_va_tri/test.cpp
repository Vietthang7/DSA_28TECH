#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int Find(ll n,ll k){
    if(k==(ll)pow(2,n-1)){
      return n;
    }
    if(k<(ll)pow(2,n-1)){
        return Find(n-1,k);
    }
    else{
        return Find(n-1,k-(ll)pow(2,n-1));
    }
}
int main(){
    faster();
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        cout<<Find(n,k)<<endl;
    }
}