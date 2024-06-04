#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n;
int s,t,u,v;
int a[1005][1005];
int dx[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
int dy[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
int ok=0;
int cnt=0;
void nhap(){
	cin>>n;
	cin>>s>>t>>u>>v;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
}
int bfs(){
    queue<pair<pair<int,int>,int>> q;
	q.push({{s,t},0});
	a[s][t]=0;
	while(!q.empty()){
		auto it=q.front();
		q.pop();
		int i=it.first.first;
		int j=it.first.second;
		int d=it.second;
		
		if(i==u && j==v){
         return d;
		}
		for(int k=0;k<8;k++){
			int i1=i+dx[k];
			int j1=j+dy[k];
			if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]==1){
				q.push({{i1,j1},d+1});
				a[i1][j1]=0;
			}
		}
	}
	return -1;

}
int mod=1e9+7;
int main(){
	faster();
	nhap();
	cout<<bfs();
}