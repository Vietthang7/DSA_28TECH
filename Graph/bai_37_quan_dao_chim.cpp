#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// dem dinh tru
int n,m;
vector<int> ke[1005];
int used[1005];
int cnt=0;
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
	++cnt;
	used[u]=1;
	for(int v:ke[u]){
      if(!used[v]){
      	dfs(v);
      }
	}
}
int mod=1e9+7;
int main(){
	faster();
	nhap();
	int res=0;
	for(int i=1;i<=n;i++){
		memset(used,0,sizeof(used));
		used[i]=1;
		cnt=0;
		if(i==1){
			dfs(2);
		}
		else{
			dfs(1);
		}
		if(cnt!=n-1){// ẩn 1 đỉnh đi và không duyệt đủ đỉnh thì đỉnh đó là đỉnh 
          ++res;
		}
	}
	cout<<res;
}