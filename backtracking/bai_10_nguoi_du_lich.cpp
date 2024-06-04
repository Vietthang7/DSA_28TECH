#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,a[100][100],X[1000];
int res=INT_MAX;
int cmin=INT_MAX;
int cp=0;
int used[1000];
void nhap(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]){
                cmin=min(a[i][j],cmin);
            }
        }
    }
}
void ql(int i){
    for(int j=1;j<=n;j++){
        if(!used[j]){
            X[i]=j;
            used[j]=1;
            cp+=a[X[i-1]][X[i]];
            if(i==n){
                res=min(res,cp+a[X[n]][1]);
            }
            else if(cp+(n-i+1)*cmin<res){
                ql(i+1);
            }
            used[j]=0;
            cp-=a[X[i-1]][X[i]];
        }
    }
}
int mod=1e9+7;
int main(){
    faster();
    cin>>n;
    nhap();
    X[1]=1;
    used[1]=1;
    ql(2);
    cout<<res;

}