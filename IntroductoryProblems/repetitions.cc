/*
 * Problem: https://cses.fi/problemset/task/1069
 *
 * Solution Idea:
 *
 * Do a linear pass of the input string keeping track of the length of the
 * current repetitions and the length of the maximum repetitions we have seen so
 * far.. If a run of repititions ends, then we check if it is greater than the
 * maximum seen so far and update it as appropriate.
 *
 */

#include <bits/stdc++.h>
#include <cstddef>

using namespace std;

int main() {
  string input;
  cin >> input;

  // Initialize the current run of repetitions with the first character and
  // length 1.
  char prev = input[0];
  long long int current_sequence = 1;
  long long int max_sequence = -1;

  for (size_t i = 1; i < input.length(); i++) {
    if (input[i] == prev) {
      // Continue the current run of repetitions since the current
      // character matches the previous character.
      current_sequence++;
    } else {
      // End the current run of repetitions and check if it is the longest seen
      // so far.
      max_sequence = max(max_sequence, current_sequence);

      // Start a new run of repetitions of length 1 with input[i].
      prev = input[i];
      current_sequence = 1;
    }
  }

  // Make sure we don't forget about the final run of repetitions at the end of
  // the string.
  max_sequence = max(max_sequence, current_sequence);

  cout << max_sequence << "\n";
  return 0;
}
