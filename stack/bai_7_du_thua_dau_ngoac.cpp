#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int check(string s){
	stack<int> st;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			st.push(i);
		}
		else if(s[i]==')'){
			int j=st.top();
			if(i-j==2){
				return 1;
			}
			else if(s[j+1]=='('&&s[i-1]==')'){
				return 1;
			}
			else {
				st.pop();
			}
		}
	}
	return 0;
}
int main(){
	faster();
	string s;
	cin>>s;
	if(check(s)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}