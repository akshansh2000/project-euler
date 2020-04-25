#include <bits/stdc++.h>
using namespace std;

#define ul unsigned long long int

int main() {
  ul num = 600851475143, maxPrimeFactor;

  if (num % 2 == 0) {
    maxPrimeFactor = 2;
    while (num % 2 == 0) num /= 2;
  }

  for (int i = 3; i <= sqrt(num); i += 2)
    if (num % i == 0) {
      maxPrimeFactor = i;
      while (num % i == 0) num /= i;
    }

  if (num > 2) maxPrimeFactor = num;

  printf("%lld\n", maxPrimeFactor);
}
