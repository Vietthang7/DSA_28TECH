#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int pre(char c){
	if(c=='+'||c=='-'){
		return 1;
	}
	else if(c=='*'|| c=='/'){
		return 2;
	}
	return 0;
}
void solve(string s){
	stack<char> st;
	string res="";
	for(char x:s){
		if(x=='('){
			st.push(x);
		}
		else if(isalpha(x)){
			res+=x;
		}
		else if(x==')'){
			while(st.top()!='('){
				res+=st.top();
				st.pop();
			}
			st.pop();
		}
		else{
			while(!st.empty() && pre(st.top())>=pre(x)){
				res+=st.top();
				st.pop();
			}
			st.push(x);
		}
	}
	while(!st.empty()){
		res+=st.top();
		st.pop();
	}
	cout<<res<<endl;
}
int main(){
	faster();
	string s;
	cin>>s;
	solve(s);
}