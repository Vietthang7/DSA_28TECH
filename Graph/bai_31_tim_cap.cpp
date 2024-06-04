#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// dem so luong cap dinh thang tuot cua cay
int n,m;
vector<int> ke[1005];
int used[1005];
int res=0;
void nhap(){
	cin>>n;
	for(int i=0;i<n-1;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
int dfs(int u){
	used[u]=1;
	int cnt=1;// ban dau da co 1 dinh chinh la no
	for(int v:ke[u]){
		if(!used[v]){
			cnt+=dfs(v);
		}
	}
	res+=cnt;
	return cnt;
}
int mod=1e9+7;
int main(){
	faster();
	nhap();
	dfs(1);
	cout<<res;
}