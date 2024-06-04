#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
void solve(string s){
	stack<string> st;
	for(int i=s.size()-1;i>=0;i--){
		if(isalpha(s[i])){
			st.push(string(1,s[i]));// tao ra 1 chuoi co 1 ki tự từ s[i]
		}
		else{
			string th1=st.top();
			st.pop();
			string th2=st.top();
			st.pop();
			string e="("+th1+s[i]+th2+")";
			st.push(e);
		}
	}
	cout<<st.top()<<endl;
}
int main(){
	faster();
	string s;
	cin>>s;
	solve(s);
}