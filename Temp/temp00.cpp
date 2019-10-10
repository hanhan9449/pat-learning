#include <cstdio>

double f(double a) {
    if(a == 0) {
        return -1;
    }
    if (a == 1)
    {
        return 2;
    }
    return f(a - 2) / f(a - 1);

    //   switch (a) {
    //   case 0:
    //     return -1;
    //   case 1:
    //     return 2;
    //   default:
    //     return f(a - 2) / f(a - 1);
    //   }
}
int main() {
  printf("%lf\n", f(1));
  printf("%lf\n", f(2));
  printf("%lf\n", f(3));
  printf("%lf\n", f(4));
}