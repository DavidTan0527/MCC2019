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
  int prices[] = {418, 952, 850, 962, 379, 107, 98, 215, 371, 701};
  int n = sizeof(prices)/sizeof(prices[0]);
  vector<int> v (n, 0);
  v[n-1] = prices[n-1];
  for (int i = n-2; i >= 0; i--) {
    v[i] = max(prices[i], v[i+1]);
  }
  ll out = 0;
  for (int i : v) out += i;
  cout << out << endl;
  return 0;
}