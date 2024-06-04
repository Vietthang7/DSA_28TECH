#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int mod=1e9+7;
int X[100];
int n;
int final=0;
void ktao(){
    for(int i=1;i<=n;i++){
        X[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1 && X[i]==1){
        X[i]=0;
        i--;
    }
    if(i==0){
        final=1;
    }
    else {
        X[i]=1;
    }
}
int main(){
    faster();
    cin>>n;
    ktao();
    while(final==0){
        for(int i=1;i<=n;i++){
            cout<<X[i];
        }
        cout<<endl;
        sinh();
    }
    
}