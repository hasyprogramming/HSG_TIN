//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <map>

using namespace std;


#define ll long long
#define ld long double
#define sza(x) k((long long) x.size());
#define all(x) (x).begin(), (x).end();
const ll maxn = 1e6+1;
ll gcd(ll a, ll b){
  if (b == 0){
    return a;
  }
  return gcd(b, a%b);
}
ll comp(pair<ll, ll> a, pair<ll, ll> b){
  if (a.first == b.first) return a.second > b.second;
  return a.first > b.first;
}
ll n, m, k, a[5002][5002], s[5002][5002];




int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // freopen("INP.txt", "r", stdin);
  // freopen("OUT.txt", "w", stdout);


  for(int i = 0; i< 5002; i++){
    for(int j= 0; j < 5002; j++){
      a[i][j] = 0;
      s[i][j] = 0;
    }
  }

  cin >> n >> m >> k;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m ;j++){
      cin >> a[i][j];
    }
  }
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      s[i][j] = s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i-1][j-1];
    }
  }
  ll cur = 1;
  bool check = true;
  while (check){
    check = false;
    for(int i = 1; i <= n-cur; i++){
      for(int j = 1; j <= m-cur; j++){
        ll res = s[i+cur][j+cur]-s[i-1][j+cur]-s[i+cur][j-1]+s[i-1][j-1];
        if (res <= k){
          check = true;
        }
      }
    }
    cur++;
  }
  cout << cur-1 << endl;
}
