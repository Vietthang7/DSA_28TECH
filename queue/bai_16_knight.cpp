#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define  ii pair<int,int>
#define iii pair<ii,int>  
int mod=1e9+7;
int s1,s2,t1,t2;
int used[10][10];
int dx[8]={-2,-2,-1,-1,1,1,2,2};
int dy[8]={-1,1,-2,2,-2,2,-1,1};
int bfs(){
 memset(used,0,sizeof(used));
 queue<iii> q;
 q.push({{s1,s2},0});
 used[s1][s2]=1;
 while(!q.empty()){
 	auto it=q.front();
 	q.pop();
 	int i=it.first.first;
 	int j=it.first.second;
 	int d=it.second;
 	if(i==t1 && j==t2){
 		return d;
 	}
 	for(int k=0;k<8;k++){
 		int i1=i+dx[k];
 		int j1=j+dy[k];
 		if(i1>=1 && i1<=8 &&j1>=1 && j1<=8 && !used[i1][j1]){
 			q.push({{i1,j1},d+1});
 			used[i1][j1]=1;

 		}
 	}
 }
 return -1;
}
void solve(){
	string ST,ED;
	cin>>ST>>ED;
	s1=ST[1]-'0';
	s2=ST[0]-'a'+1;
	t1=ED[1]-'0';
	t2=ED[0]-'a'+1;
	cout<<bfs()<<endl;

}
int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		solve();
	}

}