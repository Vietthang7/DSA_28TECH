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
	int d[256]={0};
	int max_fre=0;
	for(char x:s){
       d[x]++;
       max_fre=max(max_fre,d[x]);
	}
	int n=s.size();
	if(max_fre<=(n-1)/2+1){//(n-1)/k+1 voi k la khoang cach o day la 2
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

	

}