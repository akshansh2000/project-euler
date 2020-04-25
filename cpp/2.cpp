#include <bits/stdc++.h>
using namespace std;

int main() {
  int prePrevious = 1, previous = 2, current, total = 2;
  while (previous + prePrevious < 4e6) {
    current = previous + prePrevious;
    if (current % 2 == 0) total += current;

    prePrevious = previous;
    previous = current;
  }

  printf("%d\n", total);
}
