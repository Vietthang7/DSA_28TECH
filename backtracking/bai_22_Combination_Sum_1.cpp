#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,k;
int X[1000];
vector<string> v;
void ql(int i,int start,int sum){
	if(sum>n || i>k){
		return;
	}
    for(int j=start;j<=9;j++){
    	if(sum+j<=n && i<=k){
    	X[i]=j;
    	sum+=j;
    	if(sum==n && i==k){
    		string s="";
    		for(int u=1;u<=i;u++){
    			s+=to_string(X[u]);
    		}
    		v.push_back(s);
    	}
    	else if(sum+j<n && i<k){
    		ql(i+1,j+1,sum);
    	}
    	sum-=j;
        }else{
        	return ;
        }

    }
}
int mod=1e9+7;
int main(){
	faster();
	cin>>n>>k;
	ql(1,1,0);
	if(v.size()==0){
		cout<<"NOT FOUND";
	}
	else{
		sort(v.begin(),v.end());
		for(string x:v){
			for(int i=0;i<x.size();i++){
				cout<<x[i];
				if(i!=x.size()-1){
					cout<<" + "; 
				}
			}
			cout<<endl;
		}
	}
}