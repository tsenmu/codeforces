#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <sstream>
#include <queue>

using namespace std;


int solve(int n, int m) {
  int ans = 0;
  while (true) {
    if (m == n) {
      return ans;
    }
    if (m < n) {
      ans += n - m;
      return ans;
    }
    if (m & 1) {
      m++;
    } else {
      m >>= 1;
    }
    ans++;
  }
}

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  printf("%d\n", solve(n, m));
  return 0;
}