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
	int cnt[254];
	memset(cnt,0,sizeof(cnt));
	for(int i=0;i<s.size();i++){
		cnt[s[i]]++;
	}
	int res=0;
	for(int i=0;i<254;i++){
		if(cnt[i]%2!=0){
			++res;
		}
	}
	if(res>0){
		--res;
	}
	if(res%2==0){
		cout<<"1"<<endl;
	}
	else{
		cout<<"2"<<endl;
	}
}