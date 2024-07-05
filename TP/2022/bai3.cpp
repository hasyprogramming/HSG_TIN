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
ll n, a[3002][3002];
void com(ll i, ll j, ll r){
  if (r <= 1) return;
  if (i > 0) a[i-1][j] = max(r-1, a[i-1][j]);
  if (i < n-1) a[i+1][j] = max(r-1, a[i+1][j]);
  if (j > 0) a[i][j-1] = max(r-1, a[i][j-1]);
  if (j < n-1) a[i][j+1] = max(r-1, a[i][j+1]);
  a[i][j]--;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for(int i =0; i < n;i++){
    for(int j = 0; j < n;j++){
      cin >> a[i][j];
      if (a[i][j] > 0)a[i][j]++;
    }
  }
  bool check = true;
  while (check){
    check = false;
    for(int i = 0; i < n;i++){
      for(int j =0; j < n; j++){
        com(i, j, a[i][j]);
        if (a[i][j] >= 2) check = true;
      }
    }
  }
  ll ans = 0;
  for(int i = 0; i < n;i++){
    for(int j= 0; j < n;j++){
      if (a[i][j] == 0) ans++;
    }
  }
  cout << ans << endl;
}