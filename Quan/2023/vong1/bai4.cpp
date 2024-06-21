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
string x;
deque<char> s;
bool check(deque<char> a){
  if (a.size()%2==0){
    for(int i= 0; i < a.size()/2; i++){
      if (a[i] != a[i+a.size()/2]) return false;
    }
    return true;
  }
  return false;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  //freopen("INP.txt", "r", stdin);
  //freopen("OUT.txt", "w", stdout);
  cin >> x;
  for(int i =0;i < x.length(); i++){
    s.push_back(x[i]);
  }
  while(!check(s)){
    s.pop_back();
    if (s.size() % 2 == 1){
      s.pop_back();
    }
  }
  cout << s.size();
}
