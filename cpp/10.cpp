#include <bits/stdc++.h>
using namespace std;

#define ul unsigned long long int

bool isPrime(int num) {
  for (int i = 2; i <= sqrt(num); i++)
    if (num % i == 0) return false;

  return true;
}

int main() {
  ul sum;

  for (int i = 2; i < 2000000; i++)
    if (isPrime(i)) sum += i;

  printf("%lld\n", sum);
}
