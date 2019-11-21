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
  int numbers[] = {8, 11, 13, 21, 54, 54, 57, 93, 93, 100};
  int n = sizeof(numbers)/sizeof(numbers[0]);
  sort(numbers, numbers+n);
  int diff = INT16_MAX;
  for (int i = 0; i < n - 1; i++) {
    diff = min(diff, numbers[i+1] - numbers[i]);
  }
  cout << diff << endl;

  return 0;
}