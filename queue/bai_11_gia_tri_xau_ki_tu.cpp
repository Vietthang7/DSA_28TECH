#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
void solve(){
	int n;
	string s;
	cin>>n>>s;
	int d[256]={0};
	for(char x:s){
		d[x]++;
	}
   priority_queue<int> q;
   for(int i=0;i<256;i++){
   	if(d[i]){
   		q.push(d[i]);
   	}

   }
   while(n-- && !q.empty()){
   	int u=q.top();
   	q.pop();
   	if(u-1>0){
   		q.push(u-1);
   	}
   }
   ll res=0;
   while(!q.empty()){
   	int u=q.top();
   	q.pop();
   	res+=1ll*u*u;
   }
   cout<<res<<endl;
}
int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}