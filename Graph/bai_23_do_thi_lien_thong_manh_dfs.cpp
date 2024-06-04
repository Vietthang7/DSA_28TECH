#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,m;
vector<int> ke[1005];
bool used[1005];
int cnt=0;
void nhap(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        ke[x].push_back(y);
    }
}
void dfs(int u){
    ++cnt;
    used[u]=true;
    for(int x:ke[u]){
        if(!used[x]){
            dfs(x);
        }
    }
}
int check(){
    for(int i=1;i<=n;i++){
        cnt=0;
        memset(used,false,sizeof(used));
        dfs(i);
        if(cnt!=n){
            return 0;
        }
    }
    return 1;
}
int main(){
    faster();
    nhap();
    if(check()){
        cout<<"1";
    }
    else{
        cout<<0;
    }
}