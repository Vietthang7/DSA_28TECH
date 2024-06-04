#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,a[100],X[100];
bool used[1005];
void Try(int i){
     for(int j=n;j>=1;j--){
     	if(!used[j]){
     		X[i]=j;
     		used[j]=true;
     		if(i==n){
     			for(int u=1;u<=n;u++){
     				cout<<a[X[u]]<<" ";
     			}
     			cout<<endl;
     		}
     		else {
     			Try(i+1);
     		}
     		used[j]=false;
     	}
     }
}

int main(){
	faster();
	int m;
	cin>>m;
	set<int> se;
	for(int i=1;i<=m;i++){
       int x;
       cin>>x;
       se.insert(x);
	}
	 n=0;
	for(int x:se){
		n++;
		a[n]=x;
	}
	Try(1);

}