#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
typedef pair<int,int> ii;
int mod=1e9+7;
int bfs(int s,int t){
	queue<pair<int,int>> q;
	q.push({s,0});
	set<int> se;
	se.insert(s);
	while(!q.empty()){
		ii x=q.front();
		q.pop();
		if(x.first==t){
			return x.second;
		}
		if(x.first>1 && se.count(x.first-1)==0){
			q.push({x.first-1,x.second+1});
			se.insert(x.first-1);
		}
		if(x.first<t && se.count(x.first*2)==0){
			q.push({x.first*2,x.second+1});
			se.insert(x.first*2);
		}
	}
	return -1;
}
int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		cout<<bfs(x,y)<<endl;
	}
}