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
string int_to_day(ll n){
  n+=2;
  n%=7;
  string s = "Thứ ";

  if (n == 2){
    s += "Hai";
  } else if (n == 3){
    s+= "Ba";
  } else if (n == 4){
    s+= "Bốn";
  } else if (n == 5){
    s+= "Năm";
  } else if (n == 6){
    s+= "Sáu";
  } else if (n == 0){
    s+= "Bảy";
  } else if (n == 1){
    s = "Chủ Nhật";
  }
  return s;
}

ll ar1min = inf, ar1max = -inf;
string ar2min = "", ar2max = "";
vector<string> a;
ll x;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  //freopen("INP.txt", "r", stdin);;
  //freopen("OUT.txt", "w", stdout);
  ll cnt = 0;
  while (cin >> x){
    if (x < ar1min){
      ar1min = x;
      ar2min = int_to_day(cnt);
    }
    if (x > ar1max){
      ar1max = x;
      ar2max = int_to_day(cnt);
    }
    if (x > 35){
      a.push_back(int_to_day(cnt));
    }
    cnt++;
  }
  cout << ar1min << " " << ar1max << endl;
  cout << ar2min << " " << ar2max << endl;
  for(int i = 0; i < (a.size());i++){
    cout << a[i] << " ";
  }
  return 0;
}
