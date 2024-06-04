#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// tim duong di ngan nhat giua moi cap dinh tren do thi
// vo huong, co huong,co the co canh am
// khong co chu trinh am
// do phuc tap O(V^3)
// Chi ap dung voi do thi co dinh <=400 do do phuc tap lon
// su dung ma tran ke
int mod=1e9+7;
void Floyd(){
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
}
int main(){
	faster();
}