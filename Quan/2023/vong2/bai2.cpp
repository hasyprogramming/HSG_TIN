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
ll n;
map<ll, ll> a;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // freopen("INP.txt", "r", stdin);;
  // freopen("OUT.txt", "w", stdout);
  cin >> n;
  for(int i = 0; i < n; i++){
    ll num;
    cin >> num;
    if (a.find(num) != a.end())a[num]++;
    else a[num] = 1;
  }
  ll ans = 0;
  for(auto i = a.begin(); i != a.end(); i++){
    if (i->second > 1){
      ans+=i->second;
    }
  }
  cout << ans << endl;
}
