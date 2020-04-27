#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num) {
  ostringstream numToString;
  numToString << num;

  string numAsString = numToString.str();

  string temp = numAsString;
  reverse(numAsString.begin(), numAsString.end());

  return temp == numAsString;
}

int main() {
  int maximum;

  for (int outer = 999; outer > 99; outer--)
    for (int inner = 999; inner > 99; inner--)
      if (isPalindrome(outer * inner))
        maximum = (outer * inner > maximum) ? (outer * inner) : maximum;

  printf("%d\n", maximum);
}
