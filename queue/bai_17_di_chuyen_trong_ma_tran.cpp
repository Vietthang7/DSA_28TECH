#include<bits/stdc++.h>

using namespace std;
#define pb push_back
using  ll = long long;
typedef  pair<int,int> ii;
typedef pair<ii,int> iii;

int used[1005][1005];
int n,m;
int a[1005][1005];

int bfs(){
	memset(used,0,sizeof(used));
	queue<iii> q;
	q.push({{1,1},0});
	used[1][1]=1;
	while(!q.empty()){
		iii x=q.front();
		q.pop();
		int i=x.first.first;
		int j=x.first.second;
		int d=x.second;
		if(i==n && j==m){
			return d;
		}
		int i1=i+a[i][j];
		int j1=j+a[i][j];
		if(i1>=1 && i1<=n && !used[i1][j]){
			q.push({{i1,j},d+1});
			used[i1][j]=1;
		}
		if(j1>=1 && j1<=m && !used[i][j1]){
			q.push({{i,j1},d+1});
			used[i][j1]=1;
		}
	}
	return -1;
	
}
void solve(){
cin>>n>>m;
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		cin>>a[i][j];
	}
}	
cout<<bfs()<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	
}