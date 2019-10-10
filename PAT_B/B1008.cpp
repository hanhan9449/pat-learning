#include <cstdio>

int main() {
    int n, t, i;
    int count = 0;
    scanf("%d", &n); // 数组大小
    scanf("%d", &t); // 循环次数
    t %= n; // make sure t < n
    int a[n];

    for(i = 0; i < n; ++i) {
        int temp = (i + t) % n;
        scanf("%d", a + temp);
    }
    for(i = 0; i < n; ++i) {
        count++;
        printf("%d", *(a + i));
        if(count < n) {
            printf(" ");
        }
    }

}