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
string s;
vector<ll> num;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> s;
  ll cur=0, digit=0;
  s+="a";
  for(int i =0; i < s.length();i++){
    ll c = s[i]-48;
    if (c >= 0 && c <= 9){
        if (cur == 0){
            cur = c;
        } else{
            cur*=10;
            cur+=c;
        }
        digit++;
    } else{
        num.push_back(cur);
        cur = 0;
        digit=0;
    }
  }
  ll ans = 0;
  sort(num.begin(), num.end());
  for(int i= 0; i < num.size()-1; i++){
    if (num[i]!=num[i+1])ans++;
  }
  cout << ans << endl;
}
