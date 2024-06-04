#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int solve(string s){
	stack<int> st;
	for(int i=s.size()-1;i>=0;i--){
		if(isdigit(s[i])){
			st.push(s[i]-'0');
		}
		else{
			int o1=st.top();
			st.pop();
			int o2=st.top();
			st.pop();
			int res;
			if(s[i]=='+'){
				res=o1+o2;
			}
			if(s[i]=='-'){
				res=o1-o2;// do la tien to
			}
			if(s[i]=='*'){
				res=o1*o2;
			}
			if(s[i]=='/'){
				res=o1/o2;// do la tien to
			}
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