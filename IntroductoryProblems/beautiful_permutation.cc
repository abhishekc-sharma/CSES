/*
 * Problem: https://cses.fi/problemset/task/1070
 *
 * Solution Idea:
 *
 * Only when n is 2 or 3 do we not have any beautiful permutations. For n = 1 it
 * is trivial. For n > 3 we can just arrange every even number 2 <= x <= n
 * followed by every odd number 1 <= x <= n to ensure no consecutive numbers are
 * next to each other in the permutation.
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n;
  cin >> n;

  if (n == 1) {
    cout << "1\n";
    return 0;
  }

  if (n <= 3) {
    cout << "NO SOLUTION\n";
    return 0;
  }

  for (long long int i = 2; i <= n; i += 2) {
    cout << i << " ";
  }

  for (long long int i = 1; i <= n; i += 2) {
    cout << i << " ";
  }

  cout << "\n";

  return 0;
}
