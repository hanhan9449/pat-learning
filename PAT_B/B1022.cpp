#include <cstdio>

int main() {
  long long A, B;
  short D;
  long long C;
  short ans[60], num = 0;

  scanf("%lld %lld %hd", &A, &B, &D);
  C = A + B;
  // 除基取余法
  do {
    ans[num++] = C % D;
    C /= D;
  } while (C != 0);
  for (int i = num - 1; i >= 0; --i) {
    printf("%hd", ans[i]);
  }
  return 0;
}