#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
string xuly(string s){
	stack<char> st;
	for(int i=0;i<s.size();i++){
		if(!st.empty() && s[i]==st.top()){
			st.pop();
		}
		else{
			st.push(s[i]);
		}
	}
	string res="";
	while(!st.empty()){
		res+=st.top();
		st.pop();
	}
	reverse(res.begin(),res.end());
	if(res.size()==0){
		return "EMPTY";
	}
	else{
		return res;
	}

}
int main(){
	faster();
	string s;
	cin>>s;
	cout<<xuly(s)<<endl;
}