//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
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


vector<ll> fac(ll m){
  vector<ll> a;
  for(int i = 1; i <= sqrt(m); i++) if (m%i==0){
    if (i*i==m){
      a.push_back(i);
    }
    else{
      a.push_back(i);
      a.push_back(m/i);
    }
  }
  return a;
}


/*

BÀI NÀY CÓ NHIỀU LỜI GIẢI

*/


ll m, n;
vector<ll> factor;
vector<ll> ans;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  //freopen("INP.txt", "r", stdin);
  //freopen("OUT.txt", "w", stdout);
  cin >> m >> n;
  m*=n;
  n*=n;
  factor = fac(n);
  sort(factor.begin(), factor.end(), greater<int>());
  ll cnt = 0;
  while (m > 0){
    while (m >= factor[cnt]){
      m-=factor[cnt];
      ans.push_back(n/factor[cnt]);
    }
    cnt++;
  }
  cout << ans.size() << endl;
  for(int i = 0; i < ans.size(); i++){
    cout << ans[i] << " ";
  }
}
