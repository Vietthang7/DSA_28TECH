#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,m;
char c[1000][1000];
string s,tmp="";
int ok;
int used[1000][1000];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void ql(int i,int j){
    if(ok){
    	return;
    }
    if(tmp==s){
    	ok=1;
    	return ;
    }
    for(int k=0;k<4;k++){
    	int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && !used[i1][j1]){
        	tmp+=c[i1][j1];
        	used[i1][j1]=1;
        	if(tmp==s){
        		ok=1;
        	}
        	else if(s.find(tmp)!=string::npos){
        		ql(i1,j1);
        	}
        	tmp.pop_back();
        	used[i1][j1]=0;
        }
    }
}
int mod=1e9+7;
int main(){
	faster();
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>c[i][j];
		}
	}
	cin>>s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(c[i][j]==s[0]){
			    memset(used,0,sizeof(used));
				tmp="";
				tmp+=c[i][j];
				used[i][j]=1;
				ql(i,j);
				if(ok==1){
					cout<<"YES";
					return 0;
				}
			}
		}
	}
	cout<<"NO";
}