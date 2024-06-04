#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// check chu trinh
int n,m;
vector<int> ke[1005];
int used[1005];
int ok=0;
int parent[1005];
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].pb(y);
		ke[y].pb(x);
	}
}
void dfs(int u){
	if(ok){
		return ;
	}
	used[u]=1;
	for(int v:ke[u]){
		if(!used[v]){
			parent[v]=u;
			dfs(v);
		}
		else if(used[u] && v!=parent[u]){
			ok=1;
			return ;
		}
	}
}
int mod=1e9+7;
int main(){
	faster();
	nhap();
	dfs(1);
	if(m==n-1 && !ok){
		cout<<1<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
}