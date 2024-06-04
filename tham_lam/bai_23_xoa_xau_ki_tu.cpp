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
	string s;
	cin>>s;
	s=s+"@";
	vector<int> v;
	int cnt=0;
	for(char x:s){
		if(x=='1'){
			++cnt;
		}
		else{
			v.push_back(cnt);
			cnt=0;
		}
	}
	sort(v.begin(),v.end(),greater<int>());
	int ans=0;
	for(int i=0;i<v.size();i+=2){
      ans+=v[i];
	}
	cout<<ans;
}