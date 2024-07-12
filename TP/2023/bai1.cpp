#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
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
ll t;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  freopen("TG.INP", "r", stdin);
  freopen("TG.OUT", "w", stdout);
  cin >> t;
  while (t--){
    ll a;
    cin >> a;
    if (a >= 60){
      a-=60;
      cout << "09:";
      if (a >= 10){
        cout << a;
      } else{
        cout << "0" << a;
      }
    } else{
      cout << "08:";
      if (a >= 10){
        cout << a;
      } else{
        cout << "0" << a;
      }
    }
    cout << endl;
  }
}
