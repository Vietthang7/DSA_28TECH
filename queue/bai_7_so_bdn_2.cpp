#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
vector<string> v;

void xuly(){
	queue<string> q;
	q.push("1");
	while(!q.empty()){
		string x=q.front();
		q.pop();
		v.push_back(x);
		if(x.size()>=21){
			break;
		}
		q.push(x+"0");
		q.push(x+"1");
	}
}
int chiaHet(string s,int n){
	int mod=0;
	for(int i=0;i<s.size();i++){
		mod=(mod*10)+(s[i]-'0')%n;
		mod%=n;
	}
	return mod == 0;
}
void solve(){
	ll n;
	cin>>n;
	for(string x:v){
		if(chiaHet(x,n)){
			cout<<x<<endl;
			break;
		}
	}
}
int main(){
	faster();
	xuly();
	int t;
	cin>>t;
	while(t--){
		solve();
	}

}