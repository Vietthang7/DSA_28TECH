#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int a[1000][1000];
int n,m;
vector<int> ke[1005];
int main(){
	faster();
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		cout<<i<<" : ";
		sort(ke[i].begin(),ke[i].end());
		for(int x:ke[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}

}