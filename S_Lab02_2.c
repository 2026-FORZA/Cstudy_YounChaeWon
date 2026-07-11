#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (n < 1 || n > 100 || m < 1 || m > 3) {
        printf("INPUT ERROR!");
        return 0;
    }

    if (m == 1) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) printf("*");
            printf("\n");
        }
    }
    else if (m == 2) {
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) printf("*");
            printf("\n");
        }
    }
    else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) printf(" ");
            for (int j = 1; j <= 2 * i - 1; j++) printf("*");
            printf("\n");
        }
    }

    return 0;
}