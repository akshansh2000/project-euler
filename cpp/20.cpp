#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> factorial{1};

  for (int i = 1; i <= 100; ++i) {
    int carry = 0;
    for (int j = factorial.size() - 1; j >= 0; --j) {
      int result = (factorial[j] * i) + carry;
      factorial[j] = result % 10;
      carry = result / 10;
    }

    while (carry) {
      factorial.insert(factorial.begin(), carry % 10);
      carry /= 10;
    }
  }

  int sum = 0;
  for (int el : factorial) sum += el;

  printf("%d\n", sum);
}
