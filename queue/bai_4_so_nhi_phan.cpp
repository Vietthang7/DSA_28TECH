#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	queue<string> q;
	vector<string>v;
	q.push("1");
	// v.push_back("1");
	while(v.size()<n){
		string u=q.front();
		q.pop();
		v.push_back(u);
		q.push(u+"0");
		q.push(u+"1");
		// v.push_back(u+"0");
		// v.push_back(u+"1");
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

}
} 