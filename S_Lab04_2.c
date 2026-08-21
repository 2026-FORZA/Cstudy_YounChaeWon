#include <stdio.h>

int p[35][35];

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        p[i][0] = p[i][i] = 1;
        for (int j = 1; j < i; j++) {
            p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
        }
    }

    if (m == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                printf("%d ", p[i][j]);
            }
            printf("\n");
        }
    } else if (m == 2) {
        for (int i = n - 1; i >= 0; i--) {
            for (int s = 0; s < n - 1 - i; s++) printf(" ");
            for (int j = 0; j <= i; j++) {
                printf("%d ", p[i][j]);
            }
            printf("\n");
        }
    } else {
        for (int j = n - 1; j >= 0; j--) {
            for (int i = n - 1; i >= j; i--) {
                printf("%d ", p[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
