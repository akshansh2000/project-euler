#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll chainLength(ll num) {
  ll result = 0;
  while (num != 1) {
    if (num % 2 == 0)
      num /= 2;
    else
      num = 3 * num + 1;

    ++result;
  }

  return result;
}

int main() {
  ll longestLength = INT_MIN, answer;
  for (int i = 1; i <= 1e6; ++i) {
    ll tempChainLength = chainLength(i);
    if (tempChainLength > longestLength) {
      longestLength = tempChainLength;
      answer = i;
    }
  }

  printf("%lld\n", answer);
}
