#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int k,n;
string s,res;
void ql(int i,string cur_str,int cnt){
	if(cnt>k || i>n){
		return ;
	}
	res=max(res,cur_str);
	char max_val=cur_str[i];
	for(int j=i+1;j<=n;j++){
		max_val=max(max_val,cur_str[j]);
	}
	if(max_val==cur_str[i]){
		ql(i+1,cur_str,cnt);
	}
	else{
		for(int j=i+1;j<=n;j++){
			if(cur_str[j]==max_val){
				string tmp=cur_str;
				swap(tmp[i],tmp[j]);
				ql(i+1,tmp,cnt+1);
			}
		}
	}
}
void solve(){
	cin>>k>>s;
	n=s.size();
	s="0"+s;
	res=s;
	ql(1,s,0);
	cout<<res.substr(1)<<endl;
}
int main(){
	faster();
    int t;
    cin>>t;
    while(t--){
    	solve();
    }



}