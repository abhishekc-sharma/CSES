/*
 * Problem: https://cses.fi/problemset/task/1071/
 *
 * Solution Idea:
 *
 * Given a row y and a column x it is easy to see that the number must be in
 * layer n = max(y, x) and there are (n-1)^2 number in the preceeding n-1
 * layers.
 *
 * Also the structure of the spiral is such that even layers start at (0, layer)
 * and odd layers start at (layer, 0).
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int t;
  cin >> t;

  for (long long int i = 0; i < t; i++) {
    long long int x, y;
    cin >> y >> x;

    long long int layer = max(x, y);

    long long int layer_start = (layer - 1) * (layer - 1);

    if (layer % 2 == 0) {
      // layer starts at (layer, 0)
      // moves downwards to (layer, layer)
      // moves leftwards to (0, layer)

      if (x == layer && y == layer) {
        // in the mid point of layer
        cout << layer_start + layer << "\n";
      } else if (x == layer) {
        // in the first part of the layer
        cout << layer_start + y << "\n";
      } else if (y == layer) {
        // in the last part of the layer
        cout << layer_start + layer + (layer - x) << "\n";
      }
    } else {
      // layer starts at (0, layer)
      // moves rightwards to (layer, layer)
      // moves upwards to (layer, 0)

      if (x == layer && y == layer) {
        // in the mid point of the layer
        cout << layer_start + layer << "\n";
      } else if (y == layer) {
        // in first part of the layer
        cout << layer_start + x << "\n";
      } else if (x == layer) {
        // in the last part of the layer
        cout << layer_start + layer + (layer - y) << "\n";
      }
    }
  }

  return 0;
}
