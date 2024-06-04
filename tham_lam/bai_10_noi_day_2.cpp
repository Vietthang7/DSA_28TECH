#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int main(){
	faster();
	int n;
	cin>>n;
	int a[n];
	priority_queue<int> pq;
	for(int &x:a){
       cin>>x;
       pq.push(x);
	}
	ll res=0;
	while(pq.size()>1){
		ll t1=pq.top();
		pq.pop();
		ll t2=pq.top();
		pq.pop();
		res+=(t1+t2);
		res%=mod;
		pq.push(t1+t2);
	}
	cout<<res<<endl;
}