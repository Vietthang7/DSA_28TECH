#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,a[1000],X[1000];
bool used[1000];
void xuly(){
	
	for(int i=1;i<=n;i++){
		cout<<X[i];
	}
	cout<<endl;
}
// void ql_hoan_vi(int i){
// 	for(int j=1;j<=n;j++){
// 		if(!used[j] && abs(j-X[i-1])!=1){
// 			X[i]=j;
// 			used[j]=true;
// 			if(i==n){
// 				xuly();
// 			}
// 			else {
// 				ql_hoan_vi(i+1);
// 			}
// 			used[j]=false;
// 		}
// 	}
// }
void ql_hoan_vi(int i,int prev){
	for(int j=1;j<=n;j++){
		if(!used[j] && abs(j-prev)!=1){
			X[i]=j;
			used[j]=true;
			if(i==n){
				xuly();
			}
			else {
				ql_hoan_vi(i+1,X[i]);
			}
			used[j]=false;
		}
	}
}
int main(){
	faster();
	cin>>n;
	//X[0]=-1;
	ql_hoan_vi(1,-1);
}
// #include<bits/stdc++.h>
// using namespace std;

// using ll=long long;
// #define pb push_back
// #define sz size()
// #define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
// #define vi vector<int>
// #define vll vector<ll>

// int mod=1e9+7;
// int n,a[1000],X[1000];
// bool used[1000];
// bool check(int n,int m){
// 	return abs(n-m)!=1;
// }
// void xuly(){
// 	for(int i=2;i<=n;i++){
// 		if(!check(X[i],X[i-1])){
// 			return ;
// 		}
// 	}
// 	for(int i=1;i<=n;i++){
// 		cout<<X[i];
// 	}
// 	cout<<endl;

// }
// void ql_hoan_vi(int i){
// 	for(int j=1;j<=n;j++){
// 		if(!used[j]){
// 			X[i]=j;
// 			used[j]=true;
// 			if(i==n){
// 				xuly();
// 			}
// 			else {
// 				ql_hoan_vi(i+1);
// 			}
// 			used[j]=false;
// 		}
// 	}
// }
// int main(){
// 	faster();
// 	cin>>n;
// 	ql_hoan_vi(1);
// }