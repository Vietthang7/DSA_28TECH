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
	int n;
	cin>>n;
	for(int i=0;i<(1<<n);i++){
		//phan tich tung bit 1 cua so i
		for(int j=n-1;j>=0;j--){
			if((i&(1<<j))!=0){
				cout<<1;
			}
			else {
				cout<<0;
			}
		}
		cout<<endl;
	}
}