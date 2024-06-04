#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
ll xuly(ll n , char a, char b){
	string s=to_string(n);
	for(int i=0;i<s.size();i++){
		if(s[i]==a){
			s[i]=b;
		}
	}
	return stoll(s);
}
int mod=1e9+7;
int main(){
	faster();
	ll a,b;
	cin>>a>>b;
	cout<<xuly(a,'5','6')+xuly(b,'5','6')<<" ";
	cout<<xuly(a,'6','5')+xuly(b,'6','5');

}