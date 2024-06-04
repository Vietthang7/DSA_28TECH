#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int n, k;
int X[1000];
vector<int> res;
vector<string> v;

bool check(int n){
    if(n < 2) {
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void ql(int i, int start, int sum){
    for(int j = start; j < res.size(); j++){
        if(sum + res[j] <= n && i <= k){
            X[i] = res[j];
            sum += res[j];
            if(i == k && sum == n){
                string s = "";
                for(int u = 1; u <= i; u++){
                    s += to_string(X[u]);
                    if(u != i) s += " + ";
                }
                v.push_back(s);
            }
            else if(sum + res[j] < n && i < k){
                ql(i + 1, j + 1, sum);
            }
            sum -= res[j];
        }
        else {
            return;
        }
    }
}

int main(){
    faster();
    for(int i = 2; i <= 500; i++){
        if(check(i)){
            res.push_back(i);
        }
    }
    cin >> n >> k;
    ql(1, 0 , 0);
    if(v.size() == 0){
        cout << "NOT FOUND";
    }
    else {
        for(string x : v){
            cout << x << "\n";
        }
    }
}
