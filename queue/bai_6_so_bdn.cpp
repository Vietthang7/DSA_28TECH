#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
vector<ll> v;
void xuly(){
	queue<ll> q;
	q.push(1);
	while(!q.empty()){
		ll u=q.front();
		q.pop();
		v.push_back(u);
		if(u<=1e18){
			q.push(u*10);
			q.push(u*10+1);
		}
	}
}
void solve(){
	ll n;
	cin>>n;
	int cnt =0;
	for(ll x:v){
		if(x<n){
			++cnt;
		}
		else{
			break;
		}
	}
	cout<<cnt<<endl;
}
int main(){
	faster();
	xuly();
	int t ;
	cin>>t;
	while(t--){
		solve();
	}
}