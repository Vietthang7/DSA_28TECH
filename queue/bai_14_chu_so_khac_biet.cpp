#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
vector<int> v;
void xuly(){
	queue<int> q;
	for(int i=1;i<=5;i++){
		q.push(i); 
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		v.push_back(u);
		int tmp=u;
		int d[10]={0};
		while(tmp){
			d[tmp%10]=1;
			tmp/=10;
		}
		for(int i=0;i<=5;i++){
			if(d[i]==0){
				q.push(u*10+i);
			}
		}
	}
}
void solve(){
	int l,r;
	cin>>l>>r;
	int cnt=0;
	for(int x:v){
		if(x>r){
			break;
		}
		if(x>=l){
			++cnt;
		}
	}
	cout<<cnt<<endl;
}
int main(){
	faster();
	xuly();
	for(int x:v){
		cout<<x<<" ";
	}
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}