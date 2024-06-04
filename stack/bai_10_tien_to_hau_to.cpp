#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
string solve(string s){
	stack<string> st;
	for(int i=s.size()-1;i>=0;i--){
		if(isalpha(s[i])){
			st.push(string(1,s[i]));
		}
		else{
			string o1=st.top();
			st.pop();
			string o2=st.top();
			st.pop();
			string res=o1+o2+s[i];
			st.push(res);
		}
	}
	return st.top();
}
int main(){
	faster();
	string s;
	cin>>s;
	cout<<solve(s)<<endl;
}