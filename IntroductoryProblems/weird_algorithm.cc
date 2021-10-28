/*
 * Problem: https://cses.fi/problemset/task/1068
 *
 * Solution Idea:
 *
 * Repeatedly perform the operations based on if the number is even or odd and
 * continue until we reach 1.
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n;
  cin >> n;

  while (n != 1) {
    cout << n << " ";
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3 * n + 1;
    }
  }

  cout << n << "\n";
}
