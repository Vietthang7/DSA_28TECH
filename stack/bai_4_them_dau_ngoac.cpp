#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int xuly(string s){
	int cnt=0;
	stack<int> st;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			st.push(i);
		}
		else{
			if(!st.empty()){
				st.pop();
			}
			else{
				++cnt;
			}
		}
	}
	cnt+=st.size();
	return cnt;

}
int main(){
	faster();
	string s;
	cin>>s;
	cout<<xuly(s);
}