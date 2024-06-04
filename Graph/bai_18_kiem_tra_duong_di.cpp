#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,m,dem=0;
int a[1005][1005];
int visited[1005];
int tplt[1005];
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
void dfs(int u){
	visited[u]=1;
	tplt[u]=dem;// xem thuoc thanh phan lien thong thu may
	sort(ke[u].begin(),ke[u].end());
	for(int v:ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
int main(){
	faster();
	nhap();
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			++dem;
			dfs(i);
		}
	}
	int q;
	cin>>q;
	while(q--){
		int x,y;
		cin>>x>>y;
		if(tplt[x]==tplt[y]){
			cout<<"1"<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
}