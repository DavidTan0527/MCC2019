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
  string shouts[] = {"odd", "even", "odd", "odd", "odd", "even", "even", "even", "even", "even", "odd", "odd", "even", "even", "even", "odd", "odd", "odd", "odd", "odd"};
  int n = sizeof(shouts)/sizeof(shouts[0]);
  ll curr = 1;
  for (int i = 0; i < n; i++) {
    if (shouts[i] == "odd") {
      ll add = pow(2,i) + 0.5;
      curr += add;
    }
  }
  cout << curr << endl;
  return 0;
}