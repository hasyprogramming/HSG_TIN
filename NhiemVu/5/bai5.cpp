//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stack>
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
  freopen("INP.txt", "r", stdin);
  freopen("OUT.txt", "w", stdout);
  cin >> n;
  for(int  i =0; i< n;i++){
    ll m;
    cin >> m;
    a.push_back(m)
  }
  bool check=  false
  for(int i =0; i < n-3; i++){
    if (a[i]==1&&a[i+1]==2&&a[i+2]==3){
      cout << i << endl;
      check = true;
    }
  }
  if (!check){
    cout << "Không tìm thấy mẫu";
  }
}

