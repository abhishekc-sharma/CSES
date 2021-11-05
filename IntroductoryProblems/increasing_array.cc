/*
 * Problem: https://cses.fi/problemset/task/1094
 *
 * Solution Idea:
 *
 * Make a single pass through the array and for each element making as many
 * moves as required to make it at least as big as the previous element. If it
 * is already bigger we can leave it alone and move on.
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<long long int>::size_type n;
  cin >> n;

  vector<long long int> nums;
  nums.reserve(n);

  for (vector<long long int>::size_type i = 0; i < n; i++) {
    long long int in;
    cin >> in;
    nums.push_back(in);
  }

  long long int moves = 0;
  for (vector<long long int>::size_type i = 1; i < nums.size(); i++) {
    if (nums[i] < nums[i - 1]) {
      moves += nums[i - 1] - nums[i];
      nums[i] += nums[i - 1] - nums[i];
    }
  }

  cout << moves << "\n";

  return 0;
}
