#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
string solve(string s,int k){
	stack<pair<char,int>> st;
	for(int i=0;i<s.size();i++){
		if(!st.empty() && s[i]==st.top().first && st.top().second==k-1){
			st.pop();
		}
		else{
			if(st.empty() || st.top().first!=s[i]){
				st.push({s[i],1});
			}
			else{
				st.top().second++;
			}
		}
	}
	string res="";
	while(!st.empty()){
	     auto it=st.top();
	     st.pop();
	     for(int i=0;i<it.second;i++){
	     	res+=it.first;
	     }
	}
	reverse(res.begin(),res.end());
	return res;
}
int main(){
	faster();
	string s;
	int t;
	cin>>s>>t;
	string ans=solve(s,t);
	if(ans==""){
		cout<<"EMPTY";
	}
	else{
		cout<<ans<<endl;
	}
}