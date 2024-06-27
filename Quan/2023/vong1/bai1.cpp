//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;


#define ll long long
#define ld long double
#define sza(x) k((long long) x.size());
#define all(x) (x).begin(), (x).end();
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
ll a, b, c, d;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // freopen("INP.txt", "r", stdin);;
  // freopen("OUT.txt", "w", stdout);
  cin >> a >> b >> c >> d;

  if (a == c){
    cout << a * (b+d);
  } else if (a == d){
    cout << a * (b+c);
  } else if (b == c){
    cout << b * (a+d);
  } else if (b == d){
    cout << b * (a+c);
  } else{
    cout << -1;
  }
}
