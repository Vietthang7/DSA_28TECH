#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,m;
int color[1005];
vector<int> ke[1005];
int mod=1e9+7;
int ok=0;
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].pb(y);
		ke[y].pb(x);
	}
	// for(int i=1;i<=n;i++){
	// 	sort(ke[i].begin(),ke[i].end());
	// }
}
void dfs(int u){
	if(!ok){
		return ;
	}
	for(int v:ke[u]){
		if(color[v]==0){
			color[v]=3-color[u];
			dfs(v);
		}
		else if(color[v]==color[u]){
           ok=1;
           return;
		}
	}
}
int main(){
	faster();
	nhap();
	for(int i=1;i<=n;i++){
		if(!color[i]){
			ok=0;
			color[i]=1;
			dfs(i);
		}
	}
	if(!ok){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}