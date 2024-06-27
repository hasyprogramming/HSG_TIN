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
ll m, n, k, a[5002][5002], s[5002][5002];
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // freopen("INP.txt", "r", stdin);
  // freopen("OUT.txt", "w", stdout);
  
  
  for(int i =0; i < 5002; i++){
    for(int j= 0; j < 5002; j++){
      a[i][j] = 0;
      s[i][j] = 0;
    }
  }

  
  
  
  
  cin >> m >> n >> k;
  for(int i = 0; i < m; i++){
    for(int j= 0; j < n; j++){
      cin >> a[i][j];
    }
  }
  for(int i = 1; i <= m; i++){
    for(int j= 1; j <= n; j++){
      s[i][j] = a[i-1][j-1] + s[i][j-1]+s[i-1][j]-s[i-1][j-1];
    }
  }
  ll cnt = 0;
  ll ans = 0;
  while (cnt <= max(n, m)){
    for(int i = 1; i < m-cnt; i++){
      for(int j= 1; j < n-cnt; j++){
        ll dif = s[i+cnt][j+cnt]-s[i-1][j+cnt]-s[i+cnt][j-1]+s[i-1][j-1];
        if (dif <= k){
          ans = max(ans, cnt);
        }
      }
    }
    cnt++;
  }
  cout << ans+1 << endl;
}
