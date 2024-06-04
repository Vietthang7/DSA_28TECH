#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n, X[1000],cnt=0;
bool cot[1000],xuoi[1000],nguoc[1000];
// void ql(int i){
// 	for(int j=1;j<=n;j++){
// 		if(!cot[j] && !xuoi[i-j+8] && !nguoc[i+j-1]){
// 			X[i]=j;
// 			cot[j]=true,xuoi[i-j+8]=true,nguoc[i+j-1]=true;
// 			if(i==n){
//               cnt++;
// 			}
// 			else {
// 				ql(i+1);
// 			}
// 			cot[j]=false;
// 			xuoi[i-j+8]=false;
// 	        nguoc[i+j-1]=false;
// 		}
// 	}
// }
void ql(int i){
	for(int j=1;j<=8;j++){
		if(!cot[j] && !xuoi[i-j+8] && !nguoc[i+j-1]){
			X[i]=j;
			cot[j]=1;
			xuoi[i-j+8]=1;
			nguoc[i+j-1]=1;
			if(i==n){
				++cnt;
			}
			else{
			ql(i+1);
		}
		cot[j]=0;
		xuoi[i-j+8]=0;
		nguoc[i+j-1]=0;
		}
		
	}
}
int mod=1e9+7;
int main(){
	faster();
	cin>>n;
	ql(1);
	cout<<cnt;
}