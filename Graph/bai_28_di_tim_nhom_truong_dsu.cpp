#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,m;
int parent[1005];
int bac[1005];

void init(){
for(int i=1;i<=n;i++){
	parent[i]=i;
}
}
int Find(int u){
	if(u==parent[u]){
		return u;
	}
	else{
		return parent[u]=Find(parent[u]);
	}
}
void Union(int x,int y){
	x=Find(x);
	y=Find(y);
	if(x!=y){
		if(bac[x]>bac[y] ||bac[x]==bac[y] && x<y ){
			parent[y]=x;
		}
		else{
			parent[x]=y;
		}
	}
}
int mod=1e9+7;
int main(){
	faster();
	vector<pair<int,int>> v;
	cin>>n>>m;
	init();
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
		bac[x]++;
		bac[y]++;
	}
	for(auto e:v){
		Union(e.first,e.second);
	}
	for(int i=1;i<=n;i++){
		if(i==parent[i]){
			cout<<i<<" ";
		}
	}

}