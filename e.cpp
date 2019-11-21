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
  string s = "1010011101";
  int k = 4;
  int acc = 1;
  vector<int> o;
  vector<int> z;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] != s[i-1]) {
      if (s[i-1] == '1') o.push_back(acc);
      else z.push_back(acc);
      acc = 1;
    }
    else acc++;
  }
  if (s[s.size()-1] == '1') o.push_back(acc);
  else z.push_back(acc);
  ll maxx = 0;
  for (int i = 0; i < z.size(); i++) {
    if (z[i] > k) maxx = max(maxx, (ll)max(o[i], o[i+1]));
    else {
      int cc = k;
      ll sum = o[i];
      for (int j = i+1; j < o.size(); j++) {
        if (z[j-1] <= cc) 
          sum += o[j];
        else break;
        cc -= z[j-1];
      }
      maxx = max(maxx, sum);
    }
  }
  cout << maxx << endl;

  return 0;
}