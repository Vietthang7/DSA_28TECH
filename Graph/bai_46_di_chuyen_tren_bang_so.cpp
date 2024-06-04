#include<bits/stdc++.h>
using namespace std;
// su dung dijkstra 
using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
int n,m;
int d[1005][1005];// d[i][j]: kc (1,1)->(i,j);
int a[1005][1005];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void nhap(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			d[i][j]=1e9;
		}
	}
}
void Dijkstra(){
	d[1][1]=a[1][1];
	priority_queue <iii,vector<iii>,greater<iii>> q;
	q.push({a[1][1],{1,1}});
	while(!q.empty()){
        iii w=q.top();
        q.pop();
		int kc=w.first;
		int i=w.second.first;
		int j=w.second.second;
		if(kc>d[i][j]){
			continue;
		}
		for(int k=0;k<4;k++){
			int i1=i+dx[k];
			int j1=j+dy[k];
			if(i1>=1 && i1<=n && j1>=1 && j1<=m){
				if(d[i1][j1]>d[i][j]+a[i1][j1]){
					d[i1][j1]=d[i][j]+a[i1][j1];
					q.push({d[i1][j1],{i1,j1}});
				}
			}
		}
	}
	cout<<d[n][m]<<endl;

}
int mod=1e9+7;
int main(){
	faster();
	nhap();
	Dijkstra();
}