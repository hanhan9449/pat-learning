#include <cstdio>

int main() {
  int n, m;
  int temp;
  int sum;
  scanf("%d", &n); 
  while (n--) { // 读取需要输出的行数
    sum = 0;
    scanf("%d", &m);
    while (m--) {
        scanf("%d", &temp);
      sum += temp;
    }
    printf("%d\n", sum);
  }
  return 0;
}