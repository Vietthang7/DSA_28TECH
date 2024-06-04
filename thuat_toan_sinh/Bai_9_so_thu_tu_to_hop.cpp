#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int X[1000],n,k;
int a[1000];
int final=0;
void ktao(){
	for(int i=1;i<=k;i++){
		X[i]=1;
	}
}
void sinh(){
    int i=k;
    while(i>=1 && X[i]==n-k+i){
    	i--;
    }
    if(i==0){
    	final=1;
    }
    else {
    	X[i]++;
    	for(int j=i+1;j<=k;j++){
    		X[j]=X[j-1]+1;
    	}
    }
}
int main(){
	faster();
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
	ktao();
	vector<vector<int>> res;
	while(!final){
		vector <int> tmp(X+1,X+1+k);
		res.push_back(tmp);
		sinh(); 
	}
	int dem=0;
	for(int i=res.size()-1;i>=0;i--){
		++dem;
		bool check=true;
		for(int j=1;j<=k;j++){
			if(res[i][j-1]!=a[j]){
				check=false;
				break;
			}
		}
		if(check){
			cout<<dem<<endl;
			return 0;
		}
		
	}
}