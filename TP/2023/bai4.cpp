#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define ld long double
#define sza(a) ((long long)x.size())
#define all(a) (a).begin(), (a).end()

const ll maxn = 1e5+2;
const ll mod = 1e9+7;
const ll inf = 1e18;

ll gcd(ll a, ll b){
  if (b == 0){
    return a;
  }
  return (b, a%b);
}
ll comp(pair<ll, ll> a,  pair<ll, ll> b){
  if (a.first == b.first) return a.second > b.second;
  return a.first < b.first;
}
ll n;
ll Mi = inf, Ma = -inf;
ll ans = 0;
ll cur = 0;
vector<pair<ll, ll>> p;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for(int i = 0; i< n;i++){
    ll a, b;
    cin >> a >> b;
    p.push_back({a, b});
  }
  sort(p.begin(), p.end(), comp);
  for(int i = 0; i < n; i++){
    Mi = min(Mi, p[i].first);
    Ma = max(Ma, p[i].first);
    cur += p[i].second;
    ans = max(ans, cur-(Ma-Mi));
  }
  cout << ans << endl;
}