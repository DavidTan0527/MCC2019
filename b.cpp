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
  int prices[] = {87, 85, 4, 91, 17, 49, 78, 75, 91, 16, 9, 92};
  int n = sizeof(prices)/sizeof(prices[0]);

  sort(prices, prices+n, greater<int>());
  int sum = 0;
  for (int i : prices) sum+=i;
  for (int i = 0; i < n/4; i++) {
    sum -= prices[i*3+2];
  }
  cout << sum << endl;
  return 0;
}