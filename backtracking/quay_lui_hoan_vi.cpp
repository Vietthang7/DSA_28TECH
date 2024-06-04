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
bool used[1000];
void ql(int i){
    for(int j=1;j<=n;j++){
    	if(!used[j]){
    		X[i]=j;
    		used[j]=true;
    		if(i==n){
    			for(int k=1;k<=n;k++){
    				cout<<X[k];
    			}
    			cout<<endl;
    		}
    		else {
    			ql(i+1);
    		}
          //backtrack
    		used[j]=false;
    	}
    }
}
int main(){
	faster();
	cin>>n;
	ql(1);
}