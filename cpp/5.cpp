#include <bits/stdc++.h>
using namespace std;

int main() {
  int lcm = 1;
  for (int i = 2; i <= 20; i++) lcm *= i / __gcd(i, lcm);

  printf("%d\n", lcm);
}
