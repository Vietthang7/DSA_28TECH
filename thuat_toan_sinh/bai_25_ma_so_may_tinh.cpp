#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,a[1000],X[100];
int mod=1e9+7;
vector<string> v1,v2;
bool used[100];
void xuly(){
	string s="";
	for(int i=1;i<=n;i++){
		s=s+char(X[i]+'A'-1);
	}
	v1.push_back(s);
}
void ql_hoan_vi(int i){
    for(int j=1;j<=n;j++){
    	if(!used[j]){
           used[j]=true;
           X[i]=j;
           if(i==n){
           	xuly();
           }
    	else {
    		ql_hoan_vi(i+1);
    	}
    	used[j]=false;
    }
}
}
void xuly2(){
      string s="";
      for(int i=1;i<=n;i++){
      	s=s+to_string(X[i]);
      }
      v2.push_back(s);
}
void ql_chinh_hop(int i){
	for(int j=1;j<=n;j++){
		X[i]=j;
		if(i==n){
			xuly2();
		}else{
			ql_chinh_hop(i+1);
		}
	}
}
int main(){
	faster();
	cin>>n;
	ql_hoan_vi(1);
	ql_chinh_hop(1);
	for(string x:v1){
		for(string y:v2){
			cout<<x+y<<endl;
		}
	}
}