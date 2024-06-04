#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,a[1000];
char c,X[1000];
int mod=1e9+7;
bool used[1000];
int check(char x){
	return x=='A'|| x=='E';
}
void xuly(){
	for(int i=2;i<=n-1;i++){
		if(check(X[i]) && !check(X[i-1]) && !check(X[i+1])){
			return ;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<X[i];
	}
	cout<<endl;
}
void ql_hoan_vi(int i){ 
	for(char j='A';j<=c;j++){
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
int main(){
	faster();
    cin>>c;
    n=c-'A'+1;
    ql_hoan_vi(1);


}