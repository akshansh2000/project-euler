#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum;
  for (int i = 0; i < 1000; i++)
    if (i % 3 == 0 or i % 5 == 0)
     sum += i;

  printf("%d\n", sum);
}