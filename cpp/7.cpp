#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
  for (int i = 2; i <= sqrt(num); i++)
    if (num % i == 0) return false;

  return true;
}

int main() {
  int counter = 1, i = 3;

  for (; counter < 10001; i += 2)
    if (isPrime(i)) ++counter;

  printf("%d\n", i - 2);
}
