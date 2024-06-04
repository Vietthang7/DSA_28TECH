#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,m,k;
int used[1005];
vector<int> ke[1005];
void nhap(){
	cin>>n>>m>>k;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		sort(ke[i].begin(),ke[i].end());
	}
}
void bfs(int u){
	queue<int> q;
	q.push(u);
	used[u]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int v:ke[x]){
			if(!used[v]){
				cout<<x<<"->"<<v<<endl;
				used[v]=1;
				q.push(v);
			}
		}
	}
}
int main(){
	faster();
	nhap();
	bfs(k);
}