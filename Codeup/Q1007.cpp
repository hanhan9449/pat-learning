#include <cstdio>

int main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    int m;
    int temp;
    int sum = 0;
    scanf("%d", &m);
    while (m--) {
      scanf("%d", &temp);
      sum += temp;
    }
    printf("%d\n\n", sum);
  }
  return 0;
}