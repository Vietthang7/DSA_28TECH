#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
string s;
string tmp;
set<string> res;
void ql(int idx){
	for(char x:{tolower(s[idx]),toupper(s[idx])}){
		tmp+=x;
		if(tmp.size()==s.size()){
			res.insert(tmp);
		}
		else{
			ql(idx+1);
		}
		tmp.pop_back();
	}
}
int mod=1e9+7;
int main(){
	faster();
	cin>>s;
	ql(0);
	for(string x:res){
		cout<<x<<endl;
	}
}