#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,k,s,X[1000];
int cnt=0;
void ql(int i,int start,int sum){
	for(int j=start;j<=n;j++){
		X[i]=j;
		sum+=j;
		if(i==k){
			if(sum==s){
				++cnt;
			}
		}
		else{
			ql(i+1,j+1,sum);
		}
		sum-=j;
	}
}
// void ql(int i,int start,int sum){
// 	for(int j=start;j<=n;j++){
// 		X[i]=j;
// 		sum+=j;
// 		if(i==k){
// 			if(sum==s){
// 				++cnt;
// 			}
// 		}
// 		else{
// 			ql(i+1,j+1,sum);
// 		}
// 		sum-=j;
// 	}
// }
int mod=1e9+7;
int main(){
	faster();
	cin>>n>>k>>s;
	ql(1,1,0);
	cout<<cnt;

}