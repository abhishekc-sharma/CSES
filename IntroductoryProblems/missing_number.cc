/*
 * Problem: https://cses.fi/problemset/task/1083
 *
 * Solution Idea:
 *
 * We know that the input numbers are all distinct and in the range 1..=n and
 * exactly one of the numbers in the range is missing. We also know that the sum
 * of all the integers 1..=n is given by the n * (n+1) / 2. So we can add up all
 * the input numbers and subtract that sum from the expected sum of the first n
 * integers to find the missing one.
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n;
  cin >> n;

  long long int expected_sum = (n * (n + 1)) / 2;
  long long int sum = 0;

  for (long long int i = 0; i < n - 1; i++) {
    long long int num;
    cin >> num;
    sum += num;
  }

  cout << expected_sum - sum << "\n";

  return 0;
}
