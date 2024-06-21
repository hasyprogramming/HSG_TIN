//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
#define ll long long
#define ld long double
#define sza(x) ((long long) x.size());
#define all(x) (x).begin(), (x).end();
const ll maxn = 1e6+1;
const ll mod = 1e9+7;
const ll inf = 1e18+1;
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
ll x;
vector<ll> a(maxn, 0);
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  //freopen("INP.txt", "r", stdin);
  //freopen("OUT.txt", "w", stdout);
  ll cnt = 0;
  while (cin >> x){
    a[x]+=1;
    cnt++;
  }
  bool pr = false;
  for(int i = 1; i <= cnt; i++){
    if (a[i] == 0){
      cout << i << " ";
      pr = true;
    }
  }
  if (pr == false){
    cout << -1;
  }
  cout << endl;
  return 0;
}
