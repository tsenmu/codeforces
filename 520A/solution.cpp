#include <cstdio>
#include <string>
#include <cctype>
#include <iostream>

using namespace std;

bool isPangram(string str) {
  int alphabetCounter[26] = {0};
  for (int i = 0; i < str.length(); ++i) {
    char ch = tolower(str[i]);
    int convertedCh = (int) (ch - 'a');
    alphabetCounter[convertedCh]++;
  }
  for (int i = 0; i < 26; ++i) {
    if (alphabetCounter[i] == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  string str;
  cin >> n >> str;
  if (isPangram(str)) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}