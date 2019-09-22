#include <cstdio>

int main() {
    int n;
    int i, j;
    while(scanf("%d", &n) != EOF && n) {
        int a[n] = {0};
        int sum = 0;
        for(i = 0; i < n; ++i) {
            scanf("%d", a + i);    
        }
        for(j = 0; j < i; ++j) {
            sum += *(a+j);
        }
        printf("%d\n", sum);
    }
}