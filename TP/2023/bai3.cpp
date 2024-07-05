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
  return a.first < b.first;
}
ll n, dp[1002][1002], m[1002][1002];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >>n;
  for(int i= 0; i < 1002; i++){
    for(int j = 0; j < 1002; j++){
      dp[i][j] = 0;
      m[i][j] = 0;
    }
  }
  for(int i =0; i < n; i++){
    string s;
    cin >> s;
    for(int j = 0; j < n;j++){
      if (s[j] == '.'){
        m[i][j] = 1;
      } else m[i][j] = 0;
    }
  }
  for(int i = 0; i < n; i++)
  {if (i > 0){
      dp[i][0] = min(m[i][0], dp[i-1][0]);
      dp[0][i] = min(m[0][i], dp[0][i-1]);
    }else{
      dp[i][0] = m[i][0];
      dp[0][i] = m[0][i];
    }

  }
  for(int i = 1; i < n; i++){
    for(int j= 1; j < n; j++){
      dp[i][j] = dp[i][j-1]+dp[i-1][j];
      dp[i][j] %= mod;
      if (m[i][j]==0) dp[i][j]=0;
    }
  }
  cout << dp[n-1][n-1];
}

