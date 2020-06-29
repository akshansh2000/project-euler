#include <bits/stdc++.h>
using namespace std;

int main() {
  string num = "1";

  int carry = 0, unit;
  for (int i = 1; i <= 1000; ++i) {
    string tempNum;
    for (int j = num.size() - 1; j >= 0; --j) {
      char temp[] = {num[j], '\0'};
      unit = ((atoi(temp) * 2) + carry) % 10;
      carry = ((atoi(temp) * 2) + carry) / 10;

      stringstream intToString;
      intToString << unit;
      tempNum = intToString.str() + tempNum;
    }

    stringstream intToString;
    intToString << carry;
    num = intToString.str() + tempNum;
  }

  int i;
  for (i = 0; num[i] == '0'; ++i)
    ;

  printf("%s\n\n", num.substr(i).c_str());

  int sum = 0;
  for (i = 0; i < num.size(); ++i) {
    char temp[] = {num[i], '\0'};
    sum += atoi(temp);
  }

  printf("%d\n", sum);
}
