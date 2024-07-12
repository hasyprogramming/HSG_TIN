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
vector<ll> a{1, 2, 2, 3, 4, 5, 5};
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  freopen("INP.txt", "r", stdin);
  //freopen("OUT.txt", "w", stdout);
  if (a.size()%2==0){
    for(int i = 0; i < a.size()/2-1; i++){
      cout << i << " ";
    }
    for(int i = a.size()/2+1; i < a.size(); i++){
      cout << i << " ";
    }
  } else{
    vector<ll> b;
    for(int i = 0; i < a.size()/2; i++){
      cout << i << " ";
    }
    for(int i = a.size()/2+1; i < a.size(); i++){
      cout << i << " ";
    }
  }
}


