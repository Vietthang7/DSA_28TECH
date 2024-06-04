#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// thuat toan kosaraju
int mod=1e9+7;
int n,m;
vector<int> ke[1005];
vector<int> t_ke[1005];
stack<int> st;
int visited[1005];
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		t_ke[y].push_back(x);
	}
}
void dfs1(int u){
     visited[u]=1;
     for(int v:ke[u]){
     	if(!visited[v]){
     		dfs1(v);
     	}
     }
     st.push(u);
}
void dfs2(int u){
	//cout<<u<<" ";
	visited[u]=1;
	for(int v:t_ke[u]){
		if(!visited[v]){
			dfs2(v);
		}
	}
}
int main(){
	faster();
	nhap();
	memset(visited,0,sizeof(visited));
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs1(i);
		}
	}
	memset(visited,0,sizeof(visited));
	int ans=0;
	while(!st.empty()){
		int x=st.top();
		st.pop();
		if(!visited[x]){
			dfs2(x);
			++ans;
		}
	}
	if(ans==1){
		cout<<1<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
}