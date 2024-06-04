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
vector<int> ke[1005];
int d[1005];
int used[1005];
int res=0;
void nhap(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>d[i];
	}
	for(int i=1;i<=n-1;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
void dfs(int u,int lt){
	used[u]=1;
	int ok=0;
	for(int v:ke[u]){
		if(!used[v]){
			ok=1;
			if(d[v]==1 && lt+1<=m){
				dfs(v,lt+1);
			}
			else if(d[v]==0){
				dfs(v,0);
			}
		}
	}
	if(!ok){
		++res;
	}
}
int main(){
	faster();
	nhap();
	dfs(1,d[1]);
	cout<<res;
}