#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,X[1000];
int used[1000];
void ql(int i){
	for(int j=1;j<=n;j++){
		if(!used[j] && abs(j-X[i-1])!=1){
			X[i]=j;
			used[j]=1;
			if(i==n){
				for(int k=1;k<=n;k++){
					cout<<X[k];
				}
				cout<<endl;
			}
			else {
				ql(i+1);
			}
			used[j]=0;
		}
	}
}
int main(){
	faster();
	cin>>n;
    X[0]=-1;
    ql(1);
}