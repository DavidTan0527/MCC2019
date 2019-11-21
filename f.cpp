#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <vector>
#include <string>
using namespace std;

#pragma GCC optimize("O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//(UNCOMMENT WHEN HAVING LOTS OF RECURSIONS)
#pragma comment(linker, "/stack:200000000")
//(UNCOMMENT WHEN TRYING TO BRUTEFORCE WITH A LOT OF LOOPS)
#pragma GCC optimize("unroll-loops")

#define DEBUG(x) cout << ">> " << #x << ": " << x << endl;
#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int MOD = 1000000007;
typedef long long ll;
typedef long double ld;

int main() { _
  ll n;
  ll k;
  n = 1000029362;
  k = 5;
  ll count = -1, last_count;
  ll l = 1; ll t = 0;
  while (count < n) {
    last_count = count;
    count += (ll)(pow(k,t)+0.5);
    t = (l+1)/2;
    l++;
  }
  l -= 2;
  string s = "";
  for (int i = 0; i < l; i++) s += '0';
  ll diff = n - last_count - 1;

  if (last_count == n) {
    for (int i = 0; i < l-1; i++) {
      char c = n-1;
      s[i] = c;
      s.pop_back();
    }
  }
  else if (diff > 0) {
    ll temp = diff;
    int digit = 0;
    string a1 = "";
    while (temp != 0) {
      string add = to_string(temp%k);
      a1 = add + a1;
      temp /= k;
    }
    int len = l%2 == 0 ? a1.size()*2 : a1.size()*2 - 1;
    int pad_size = (l - len) / 2;
    for (int i = 0; i < pad_size; i++) {
      a1 = '0' + a1;
    }

    string a2 = a1;
    for (int i = 0; i < a2.size()/2; i++) 
      swap(a2[i], a2[a2.size() - i - 1]);
    if (l%2 == 1) a1.pop_back();
    s = a1 + a2;
  }
  cout << s << endl;
  return 0;
}