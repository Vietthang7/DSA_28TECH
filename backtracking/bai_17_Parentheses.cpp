#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n;
string s;
string tmp="(){}[]";
vector<string> v;
char X[1000];
bool check(string s){
	stack<char> st;
	for(char x:s){
		if(x=='('||x=='{'||x=='['){
			st.push(x);
		}
		else{
			if(st.empty()){
				return false;
			}
			char y=st.top();
			st.pop();
			if((x=='}' && y!='{')||(x==')'&& y!='(')||(x==']'&&y!='[')){
				return false;
			}
		}
	}
	if(st.empty()){
		return true;
	}
	return false;
}
void ql(int i){
	for(int j=0;j<tmp.size();j++){
		s+=tmp[j];
		if(s.size()==n){
			if(check(s)){
            v.push_back(s);
		}
	}
		else{
			ql(i+1);
		}
		s.pop_back();
	}

}
int mod=1e9+7;
int main(){
	faster();
	cin>>n;
	if(n%2!=0){
     cout<<"NOT FOUND"<<endl;
	}
	else{
		ql(1);
		sort(v.begin(),v.end());
		for(string x:v){
			cout<<x<<" ";
		}
	}
}