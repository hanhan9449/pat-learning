#include <cstdio>

int main() {
    int count = 0;
    char ans[90][90];
    while (scanf("%s", ans[count]) != EOF) 
    {
        count++;
    }
    for(int i = count - 1; i >= 0; --i) {
        printf("%s", ans[i]);
        if (i > 0)
        {
            printf(" ");
        }
        
    }
    
}