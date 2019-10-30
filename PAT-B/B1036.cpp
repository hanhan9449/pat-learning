#include <cstdio>

int main() {
  int n;
  char c;
  scanf("%d %c", &n, &c);
  // 打印第一行
  for (int i = 0; i < n; ++i) {
    printf("%c", c);
  }
  printf("\n");
  // 打印中间行
  int half;
  // 要注意对于奇偶数行数不一样
  if (n % 2 == 1) {
    half = n / 2 + 1;
  } else {
    half = n / 2;
  }
  for (int i = 0; i < half - 2; ++i) {
    printf("%c", c);
    for (int j = 0; j < n - 2; ++j) {
      printf(" ");
    }
    printf("%c\n", c);
  }
  // 打印最后一行
  for (int i = 0; i < n; ++i) {
    printf("%c", c);
  }
}