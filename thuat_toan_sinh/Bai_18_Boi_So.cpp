#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,final;
string s;
void ktao(){
	for(int i=0;i<n;i++){
		s+="0";
	}
	s[n-1]='8';
	//do la so nguyen nen 00000 khong co y nghia
}
void sinh(){
	int i=n-1;
    while(i>=0 && s[i]=='8'){
    	s[i]='0';
    	i--;
    }
    if(i==-1){
    	final=1;
    }
    else {
    	s[i]='8';
    }
}
vector<ll> v;
int main(){
	faster();
	n=19;// phai dung bien dem de check xem du nghiem chua , o bai nay la 300 do nhin vao dieu kien dau bai
	ktao();
	while(!final){
		v.push_back(stoll(s));
		sinh();
	}
	ll ans[305];
	// int dem=0; 
	for(int i=1;i<=300;i++){
		for(ll x:v){
			if(x%i==0){
				// ++dem;
				ans[i]=x;
				break;
			}
		}
	}
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<ans[x]<<endl;
	}

} 