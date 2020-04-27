#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;

  for (c = 998;; c--)
    for (b = 1; b < 1000 - c; b++) {
      a = 1000 - (b + c);

      if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
        printf("%d\n", a * b * c);
        return 0;
      }
    }
}
