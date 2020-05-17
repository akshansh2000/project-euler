#include <bits/stdc++.h>
using namespace std;

int countDivisors(int num) {
  int product = 1, count = 0;
  while (num && num % 2 == 0) {
    num /= 2;
    ++count;
  }

  product *= (!count) ? 1 : (count + 1);

  for (int i = 3; i <= num; i += 2) {
    count = 0;
    while (num && num % i == 0) {
      num /= i;
      ++count;
    }

    product *= (!count) ? 1 : (count + 1);
  }

  return product;
}

int main() {
  int i = 0;
  for (;; ++i)
    if (countDivisors((i * (i + 1)) / 2) > 500) break;

  printf("%d\n", (i * (i + 1)) / 2);
}
