#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int n, k, a[1000], X[1000];

void ql(int i, int start, int sum) {
    for(int j = start; j <= n; j++) {
        if(sum+a[j]<=k){
        X[i] = a[j];
        sum += a[j];
        if(sum == k) { 
            cout << "[";
            for(int k = 1; k <= i; k++) {
                cout << X[k];
                if(k < i) cout << " ";
            }
            cout << "]" << endl;
        }
        else if(sum < k) {
            ql(i + 1, j + 1, sum);
        }
        sum -= a[j];
    }
    else {
        return;
    }
}
}

int mod = 1e9 + 7;

int main() {
    faster();
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1,a+n+1);// do dau bai y/c in theo tu dien.
    ql(1, 1, 0);
    return 0;
}
