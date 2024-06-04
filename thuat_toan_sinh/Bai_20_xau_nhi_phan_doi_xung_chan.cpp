#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
vector<string> res;
string s;
int final,n;
void ktao(){
	s=string(n,'0');
}
void sinh(){
	int i=n-1;
	while(i>=0 && s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i==-1){
      final=1;
	}
	else {
		s[i]='1';
	}
}
int main(){
	faster();
	int N;
	cin>>N;
	for(int i=1;i<=N/2;i++){
		n=i;
		final=0;
		ktao();
		while(!final){
			string t=s;
			reverse(t.begin(),t.end());
			//s=10011+11001;
			res.push_back(s+t);
			sinh();
		}
	}
	sort(res.begin(),res.end());
	for(string x:res){
		cout<<x<<endl;
	}
}