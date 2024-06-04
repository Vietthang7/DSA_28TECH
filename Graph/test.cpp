#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
typedef pair<int,int> ii;
int n,m,k;
vector<ii> ke[100005];
void init(){
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        ke[x].push_back({y,w});
        ke[y].pb({x,w});
    }
}
void Dijkstra(int k){
    vector<int> d(n+1,1e9);
    d[k]=0;
    priority_queue<ii,vector<ii>,greater<ii>> q;
    q.push({0,k});
    while(!q.empty()){
        ii x=q.top();
        q.pop();
        int kc=x.first;
        int y=x.second;
        if(kc>d[y]){
            continue;
        }
        for( ii v:ke[y]){
            int p=v.first;
            int l=v.second;
            if(d[p]>d[y]+l){
                d[p]=d[y]+l;
                q.push({d[p],p});
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<d[i]<<" ";
    }

}

int mod=1e9+7;
int main(){
    faster();
    init();
    Dijkstra(k);

}