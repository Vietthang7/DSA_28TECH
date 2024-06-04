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

int used[100005];
vector<int> ke[1005];
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
   used[u]=1;
   for(int x:ke[u]){
   	if(!used[x]){
   		dfs(x);
   	}
   }
}
int main(){
	faster();
	nhap();
	int cnt=0;
	vector<int> v;
	for(int i=1;i<=n;i++){
		if(!used[i]){
			++cnt;
			v.push_back(i);
			dfs(i);
		}
	}
	cout<<cnt-1<<endl;
	for(int i=1;i<v.size();i++){
		cout<<v[i-1]<<" "<<v[i]<<endl;
	}
}