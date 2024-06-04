#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
vector<string> v;
void xuly(){
	queue<string> q;
	q.push("6");
	q.push("8");
	while(!q.empty()){
		string k=q.front();
		q.pop();
		v.push_back(k);
		if(k.size()>18){
			break;
		}
		q.push(k+"6");
		q.push(k+"8");
	}
}
void solve(){
	int n;
	cin>>n;
	vector<string> res;
	for(int i=v.size()-1;i>=0;i--){
		if(v[i].size()<=n){
			res.push_back(v[i]);
		}
	}
	//cout<<res.size()<<endl;
	for(string k:res){
		cout<<k<<" ";
	}
	cout<<endl;
}
int main(){
	faster();
	xuly();
	int t;
	cin>>t;
	while(t--){
		
		solve();
	}
}