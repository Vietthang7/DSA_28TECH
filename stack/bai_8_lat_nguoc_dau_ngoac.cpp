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
	int cnt=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			st.push(i);
		}else{
			if(st.empty()){
				++cnt;
				st.push(i);
			}
			else{
				st.pop();
			}
		}
	}
	return cnt;
}
int main(){
	faster();
	string s;
	cin>>s;
	cout<<solve(s)<<endl;
}