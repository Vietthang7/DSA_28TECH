#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,m;
int used[1005];
int cnt=0;
vector<int> ke[1005];
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
int res=1;
void dfs(int u){
	++cnt;
	used[u]=1;
	for(int v:ke[u]){
		if(!used[v]){
			dfs(v);
		}
	}
}
int main(){
	faster();
	nhap();
	for(int i=1;i<=n;i++){
		if(!used[i]){
			cnt=0;
			dfs(i);
			res=max(res,cnt);
		}
	}
	cout<<res;
}