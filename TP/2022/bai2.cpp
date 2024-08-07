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
  return a.first > b.first;
}
ll n, t, a[5002];
ll cur = inf;
ll ans = 0;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> t;
  for(int i = 0; i < n;i++){
    cin >> a[i];
  }
  t*=3;
  sort(a, a+n);
  for(int i = 0; i < n; i++){
    ll l, r;
    l = i+1, r = n-1;
    while (l < r){
      if (abs(t-(a[i]+a[l]+a[r])) < cur){
        cur = abs(t-(a[i]+a[l]+a[r]));
        ans = a[i]+a[l]+a[r];
      } else if (abs(t-a[i]-a[l]-a[r]) == cur){
        ans = max(ans, a[i]+a[l]+a[r]);
      }
      if (a[i]+a[l]+a[r] > t){
        r--;
      } else{
        l++;
      }
    }
  }
  cout << ans << endl;
}
