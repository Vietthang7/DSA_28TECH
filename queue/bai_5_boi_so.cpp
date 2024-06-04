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
	queue<ll> q;
	vector<ll> v;
	q.push(8);
	while(!q.empty()){
		ll u=q.front();
		q.pop(); 
		v.push_back(u);
		if(u<=1e18){
			q.push(u*10);
		    q.push(u*10+8);
		}
		
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(ll x:v){
			if(x%n==0){
				cout<<x<<endl;
				break;
			}
		}
	}

}