#include <cstdio>

void printff(int A, int CA) {
    if(CA) {
        printf("N");
    } else {
        printf("%d", A);
    }
}
int main() {
    // 输入
    int n, i;
    int A[6] = {0}; //A1,A2,A3,A4,A5
    int CA[6] = {0}; // 计数器
    int max = 0;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; ++i) {
        scanf("%d", a + i);
    }
    // 转换
    for(i = 0; i < n; ++i) {
        if(a[i] % 5 == 0) {
            if(a[i] % 2 == 0) {
                A[1] += a[i];
                CA[1]++;
            }
        } else if (a[i] % 5 == 1) {
            if(CA[2] % 2 == 0) {
                A[2] += a[i];
            } else {
                A[2] -= a[i];
            }
            CA[2]++;
        } else if (a[i] % 5 == 2) {
            CA[3]++;
        } else if (a[i] % 5 == 3) {
            A[4] += a[i];
            CA[4]++;
        } else if (a[i] % 5 == 4) {
            if(max < a[i]) {
                max = a[i];
            }
            CA[5]++;
        }
    }
    A[3] = CA[3];
    double temp = 1.0 * A[4] / CA[4];
    //输出
    printff(A[1], CA[1]);
    printf(" ");
    printff(A[2], CA[2]);
    printf(" ");
    printff(A[3], CA[3]);
    printf(" ");
    if(CA[4] == 0) {
        printf("N");
    } else {
        printf("%.1lf", temp);
    }
    printf(" ");
    printff(A[5], CA[5]);
}