#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
ll powmod(int a,int n){
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
int main(){
	faster();
	int n,k;
	cin>>n>>k;
	cout<<powmod(n,k)<<endl;
}