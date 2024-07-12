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
const ll maxn = 1e6+1;
ll n;
vector<ll> a;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  freopen("INP.txt", "r", stdin);;
  freopen("OUT.txt", "w", stdout);
  cin >> n;
  for(int i = 1; i <= sqrt(n); i++) if (n%i==0){
    if (i*i!=n){
      a.push_back(i);
      a.push_back(n/i);
    } else{
      a.push_back(i);
    }
  }
  cout << a.size();
}


