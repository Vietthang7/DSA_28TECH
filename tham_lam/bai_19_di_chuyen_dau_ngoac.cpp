#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int main(){
	faster();
	string s;
	cin>>s;
	int ans=0;
	stack<char> st;
	for(char x:s){
		if(x==')'){// chi can kiem tra dau ngoac khong hop le 
			if(!st.empty()){
				st.pop();
			}
			else{
				++ans;
			}
		}
		else{
			st.push(x);
		}
	}
	cout<<ans;

}