#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long
#define ld long double
#define sza(x) ((long long)x.size())
const ll maxn = 1e6 + 3;
const ll mod = 1e9 + 7;
const ll inf = 1e18;
const int stringtonumber = 48;
ll gcd(ll a, ll b){
  if (b==0) return a;
  return gcd(b, a%b);
}

string s;
string cop(ll l, ll r){
  string m = "";
  for(int i = l; i <= r; i++){
    m += s[i];
  }
  return m;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> s;
  ll ans = 0;
  for(int i = 0; i < s.size(); i++){
    for(int r = 0; 2*r < s.size(); r++){
      string a, b;
      a = cop(i, i+r);
      b = cop(i+r+1, i+r+1+r);
      if (a==b){
        ans = max(ans, (ll)((r+1)*2));
      }
    }
  }
  cout << ans << endl;
}

