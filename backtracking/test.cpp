#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,k;
int X[1005];
int a[1005];
int sum=0;
int used[1005];
int ok=0;
void ql(int i,int start,int cur_sum,int cnt){
    if(cnt==k+1){
        ok=1;
        return;
    }
    for(int j=start;j<=n;j++){
        if(!used[j] && cur_sum+a[j]<=sum){
            X[i]=a[j];
            cur_sum+=a[j];
            used[j]=1;
            if(cur_sum==sum){
                ql(i+1,j,0,cnt+1);
            }
            else{
                ql(i+1,j+1,cur_sum,cnt);
            }
            cur_sum-=a[j];
            used[j]=0;
        }
    }
}
int main(){
    faster();
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%k==0){
        sum/=k;
        ql(1,1,0,1);
        cout<<ok;

    }
    else{
        cout<<"0";
    }
}