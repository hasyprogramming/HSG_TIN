//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
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
vector<bool> p(maxn+1, true);
vector<ll> prime;
void build(){
  for(int i = 2; i*i <= maxn; i++){
    if (p[i]){
      for(int j = i*i; j <= maxn; j+=i){
        p[j] = false;
      }
    }
  }
  for(int i = 2; i < maxn; i++){
    if (p[i]) prime.push_back(i);
  }
}
vector<ll> op;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // freopen("INP.txt", "r", stdin);;
  // freopen("OUT.txt", "w", stdout);
  build();
  ll cnt = 0;
  while (prime[cnt]*prime[cnt]*9 <= 1e12){
    op.push_back(prime[cnt]*prime[cnt]*9);
    cnt++;
  }
  while (prime[cnt]*prime[cnt]*9 <= 1e9){
    op.push_back(prime[cnt]*prime[cnt]*9);
    cnt++;
  }
  ll t;
  cin >> t;
  while (t--){
    ll a, b;
    cin >> a >> b;
    ll l = lower_bound(op.begin(), op.end(), a)-op.begin();
    ll r = upper_bound(op.begin(), op.end(), b)-op.begin();
    cout << r-l << endl;
  }
}