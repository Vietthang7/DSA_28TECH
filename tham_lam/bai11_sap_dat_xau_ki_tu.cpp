#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
void solve(){
	int k;
	string s;
	cin>>k>>s;
	int d[256]={0};
	for(char x:s){
		d[x]++;
	}
	priority_queue<int> pq;
	for(int i=1;i<256;i++){
		if(d[i]){
           pq.push(d[i]);
		}
	}
	while(k-- && pq.size()){
		int u=pq.top();
		pq.pop();
		if(u-1>=1){
			pq.push(u-1);
		}
	}
	ll res=0;
	while(!pq.empty()){
		int u=pq.top();
		pq.pop();
		res+= 1ll*u*u;
	}
	cout<<res<<endl;

}
int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}