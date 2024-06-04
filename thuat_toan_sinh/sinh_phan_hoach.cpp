#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int X[1000],final=0,cnt=0,n;
void ktao(){
    cnt=1;
    X[1]=n;
}
void sinh(){
    int i=cnt;
    while(i>=1 && X[i]==1){
        i--;
    }
    if(i==0){
        final=1;
    }
    else {
        X[i]--;
        int d=cnt-i+1;
        cnt=i;
        int q=d/X[i];
        int r=d%X[i];
        for(int j=1;j<=q;j++){
            ++cnt;
            X[cnt]=X[i];
        }
        if(r){
            ++cnt;
            X[cnt]=r;
        }
    }
}
int main(){
	faster();
    cin>>n;
    ktao();
    while(!final){
        for(int i=1;i<=cnt;i++){
            cout<<X[i]<<" ";
        }
        cout<<endl;
        sinh();
    }
	
}
