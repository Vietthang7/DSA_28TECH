#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
typedef pair<int,int> ii;
// cay khung cuc tieu do thi vo huong.
int mod=1e9+7;
int n,m;
vector<ii> ke[100005];
int used[100005];
void init(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		ke[x].push_back({y,w});
		ke[y].push_back({x,w});
	}
	memset(used,0,sizeof(used));
}
void Prim(int s){
	priority_queue<ii,vector<ii> ,greater<ii>> q;
	used[s]=1;
	for(ii e:ke[s]){
		if(!used[e.first]){
			q.push({e.second,e.first});
		}
	}
	int total=0;
	int dem=0;
	while(!q.empty()){
		ii w=q.top();
		q.pop();
		int x=w.first;
		int y=w.second;
		if(!used[y]){
			++dem;
			total+=x;
			used[y]=1;
			for(ii k:ke[y]){
				if(!used[k.first]){
					q.push({k.second,k.first});
				}
			}
		}
	}
	if(dem!=n-1){
		cout<<"IMPOSSIBLE"<<endl;
	}
	else{
		cout<<total<<endl;
	}

}
int main(){
	faster();
	init();
	Prim(1);

}