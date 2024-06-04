#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
ll powmod(int a,ll n){
	if(n==0){
		return 1;
	}
	ll x=powmod(a,n/2);
	if(n%2==0){
		return x*x%mod;
	}
	else{
		return ((a%mod)*(x*x%mod))%mod;
	}
}
ll powmod(int a, ll n){
	if(n==0){
		return 1;
	}
	ll x=powmod(a,n/2);
	if(n%2==0){
		return x*x%mod;
	}
	else{
		return ((a%mod) * (x*x%mod))%mod;
	}
}
int main(){
	faster();
	ll n;
	cin>>n;
	cout<<powmod(2,n-1)<<endl;
}