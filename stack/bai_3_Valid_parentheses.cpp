#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
bool valid(char x,char y){
	return (x=='{' && y=='}') || (x=='[' && y==']') || (x=='(' && y==')');
}
bool check(string s){
	stack<char> st;
	for(char x:s){
		if(x=='(' || x=='[' || x=='{'){
			st.push(x);
		}
		else {
			if(st.empty()){
				return false;
			}
			char y=st.top();
			st.pop();
			if(!valid(y,x)){
				return false;
			}
		}
	}
	return st.empty();

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