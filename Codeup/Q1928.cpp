#include <cstdio>

// 用0代表闰年，1代表平年
int month[2][12] = {
    // 1,2,3,4,
    // 5,6,7,8,
    // 9,10,11,12
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}} struct Time {
  int yyyy;
  int mm;
  int dd;
};
void aToTime(int a, struct Time t) {
  t.yyyy = a / 10000;
  t.dd = a % 100;
  t.mm = a / 100 % 100;
}
bool isLeap(struct Time t) {
  return ((t.yyyy % 4 == 0 && t.yyyy % 100) || (year % 400 == 0));
}
int minus(struct Time t1, struct Time t2) {
    int ans = 1;
    while(t1.yyyy < t2.yyyy || t1.mm < t2.mm || t1.dd < t2.dd) {
        t1.dd++;
        if()
    }
}
int main() {
  int a, b;
  struct Time time1, time2;
  while (scanf("%d%d", &a, &b) != EOF) {
    // 确保a始终小于b
    if (a > b) {
      a ^= b;
      b ^= a;
      a ^= b;
    }
  }

  scanf("%d", &a);
  scanf("%d", &b);
  aToTime(a, time1);
  aToTime(b, time2);
}