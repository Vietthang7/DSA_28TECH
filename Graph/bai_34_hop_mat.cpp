#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int k,n,m;
int d[100005];
int used[100005];
vector<int> ke[100005];
void dfs(int u){
	d[u]++;
	used[u]=1;
	for(int x:ke[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}
int main(){
	faster();
	cin>>k>>n>>m;
	int nguoi[k];
	for(int &x:nguoi){
		cin>>x;
	}
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
	}

	for(int x:nguoi){
		memset(used,0,sizeof(used));
		dfs(x);
	}
	int res=0;
	for(int i=1;i<=n;i++){
		if(d[i]==k){
			++res;
		}
	}
	cout<<res;
}