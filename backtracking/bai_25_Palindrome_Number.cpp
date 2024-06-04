#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
vector<vector<string>> res;
vector<string> v;
string s;
bool check(string s){
	int l=0;
	int r=s.size()-1;
	while(l<=r){
      if(s[l]!=s[r]){
      	return false;
      }
      l++;
      r--;
	}
	return true;
}
void ql(int start,string s){
	if(start>=s.size()){
		res.push_back(v);
	}
	for( int end=start;end<s.size();end++){
		if(check(s.substr(start,end-start+1))){
			v.push_back(s.substr(start,end-start+1));
			ql(end+1,s);
			v.pop_back();
		}
	}
}
int mod=1e9+7;
int main(){
	faster();
	cin>>s;
	ql(0,s);
	for(auto it:res){
		for(auto x:it){
			cout<<x<<" ";
		}
		cout<<endl;
	}

}