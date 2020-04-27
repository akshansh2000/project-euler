#include <bits/stdc++.h>
using namespace std;

#define N 100

int main() {
  int sumOfSquares = N * (N + 1) * (2 * N + 1) / 6;
  int squareOfSum = pow(N * (N + 1) / 2, 2);

  printf("%d\n", squareOfSum - sumOfSquares);
}
